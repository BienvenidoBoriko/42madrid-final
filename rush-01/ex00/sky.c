#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		b_cel_vacia(int **tablero, int *cell)
{
	int		cont1;
	int		cont2;
	
	cont1 = 1;
	while (cont1 <= 4)
	{
		cont2 = 1;
		while (cont2 <= 4)
		{
			if (tablero[cont1][cont2] == 0)
			{
				cell[0] = cont1;
				cell[1] = cont2;
				return (0);
			}
			cont2++;
		}
		cont1++;
	}
	return (0);
}

int		viewCount(int forward, int *buildings)
{
	int		count = 0;
	int		max = 0;
	int		cont;
	int		building;
	
	if (forward == 1)
	{
		if (buildings[0] != 0)
		{
			max = buildings[0];
			count++;
		}
		cont = 0;
		while (cont < 4)
		{
			building = buildings[cont];
			if (building > buildings[cont - 1] && building > max)
			{
				count++;
				max = building;
			}
			cont++;
		}
	}
	else
	{
		if (buildings[4 - 1] != 0)
		{
			max = buildings[4 - 1];
			count++;
		}
        cont = 2;
	while (cont >= 0)
	{
		building = buildings[cont];
		if (buildings[cont] > buildings[cont + 1] && building > max)
		{
			count++;
			max = building;
		}
		cont--;
	}
	}
	
return (count);
}

int		check_filas(int left, int right, int *buildings)
{
	if (left == 0 && right == 0)
		return 1;
	if (left == 0 && right != 0)
		return right == viewCount(0, buildings);
	if (left != 0 && right == 0)
		return left == viewCount(1, buildings);
	return (left == viewCount(1, buildings) && right == viewCount(0, buildings));
}

int		mov_valido(int **tablero, int fil, int col)
{
	int		*colTofil;
    int		mov_ok;
    int		cont;
    int		filContainsZero;
    int		colContainsZero;
	
	colTofil = (int *)malloc(16);
	cont = 1;
	while (cont <= 4)
	{
		colTofil[cont] = tablero[cont][col];
		cont++;
	}
	cont = 1;
	while (cont <= 4)
	{
		if (tablero[fil][cont] == 0)
		{
			filContainsZero = 1;
        }
        if (colTofil[cont] == 0)
        {
            colContainsZero = 1;
        }
        cont++;
    }

    if (filContainsZero && colContainsZero)
    {
        free(colTofil);
        return (1);
    }

    if (!filContainsZero && colContainsZero)
    {
        mov_ok = check_filas(tablero[fil][0], tablero[fil][5], tablero[fil]);
        free(colTofil);
        return (mov_ok);
    }

    if (filContainsZero && !colContainsZero)
    {
        mov_ok = check_filas(tablero[0][col], tablero[5][col], colTofil);
        free(colTofil);
        return (mov_ok);
    }
    // Compare (top && bottom) && (left && right)
    mov_ok = check_filas(tablero[0][col], tablero[5][col], colTofil) && check_filas(tablero[fil][0], tablero[fil][5], tablero[fil]);
    free(colTofil);
    return (mov_ok);
}

int tiene_duplicados(int **tablero, int fil, int col, int guess)
{
    int cont;

    cont = 1;
    while (cont <= 4)
    {
        if (tablero[fil][cont] == guess && cont != col)
            return 1;
        cont++;
    }
    cont = 1;
    while (cont <= 4)
    {
        if (tablero[cont][col] == guess && cont != fil)
            return 1;
        cont++;
    }
    return 0;
}

int sin_conflictos(int **tablero, int fil, int col, int guess)
{
    if ((tiene_duplicados(tablero, fil, col, guess) == 0) && (mov_valido(tablero, fil, col) == 1))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int backtrack(int **tablero)
{
    int safe;
    int ok;
    int cont;
    int fil;
    int col;
    int *cel_vacia;
    int cont1;
    int numero;
    int cont2;

    cel_vacia = (int *)malloc(8);
    b_cel_vacia(tablero, cel_vacia);

    //If there is no unassigned location, we are done
    if (*cel_vacia == '\0')
    {
        free(cel_vacia);
        return (ok = 1); // success!
    }

    fil = cel_vacia[0];
    col = cel_vacia[1];
    cont = 1;
    while (cont <= 4)
    {
        tablero[fil][col] = cont;
        safe = sin_conflictos(tablero, fil, col, cont);
        cont1 = 0;
        if (safe == 1)
        {
            if (backtrack(tablero) == 1)
            {
                free(cel_vacia);
                ok = 1;
                return (ok);
            }
            else
            {
                tablero[fil][col] = 0;
            }
        }
        else
        {
            tablero[fil][col] = 0;
        }
        cont++;
    }
    free(cel_vacia);
    ok = 0;
    return (ok);
}

int ft_solve(int **matrix);

void ft_print_puzzle(int **matrix)
// Imprimir matriz
{
    int i;
    int j;

    i = -1;
    while (++i < 6)
    {
        j = -1;
        while (++j < 6)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

void ft_puzzle_init(char *argv)
{
    int i;
    int j;
    int k;
    int error;
    int **matrix;
    int initial_matrix[6][6] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0}};

    // Rellenar matriz con el input
    k = 1;
    error = 0;
    j = 0;
    while (*argv)
    {
        if (*argv >= 49 && *argv <= 57)
        {
            if (k <= 4)
                initial_matrix[0][k] = *argv - '0';
            else if (k > 4 && k <= 8)
                initial_matrix[5][k - 4] = *argv - '0';
            else if (k > 8 && k <= 12)
                initial_matrix[k - 8][0] = *argv - '0';
            else if (k > 12 && k <= 16)
                initial_matrix[k - 12][5] = *argv - '0';

            j++;
        }

        k++;
        argv = argv + 2;
    }
    if(j != 31)
    {
        error = 1;
        printf("%d",j);
    }

    i = -1;
    matrix = (int **)malloc(6 * sizeof(int *));
    while (++i < 6)
        matrix[i] = (int *)malloc(6 * sizeof(int));

    i = 0;
    j = 0;
    while (i < 6)
    {
        j = 0;
        while (j < 6)
        {
            matrix[i][j] = initial_matrix[i][j];
            j++;
        }
        i++;
    }

    //ft_solve(matrix);
    if (error == 0)
    {
        ft_print_puzzle(matrix);
        if (backtrack(matrix) == 0)
        {
            write(1, "Error\n", 6);
        }
        else
        {
            write(1, "\n", 1);
            ft_print_puzzle(matrix);
        }
    }
    else
    {
        write(1, "Error\n", 6);
    }
    
}

int main(int num, char **str)
{
    if (num == 2)
        ft_puzzle_init(str[1]);
    else
        write(1, "Error\n", 6);
    return (0);
}
