#include "mapa.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *first_line(char **tab)
{
	int i;
	char *caract;

	i = ft_strlen(tab[0]);
	caract = (char*)malloc(i * sizeof(char));
	ft_strcpy(caract, tab[0]);
	return (caract);
}

void cuadrad_v_argc(int argc, char **argv)
{
	char **cuad;
	int *coord;
	int cont;

	cont = 1;
	while (cont < argc)
	{
		cuad = ft_map(argv[cont]);
		if (cuad == NULL)
			write(1, "map error \n", 10);
		else
		{
			coord = cal_cuadrada(cuad, cuad[0], inptut_len(cuad));
			ft_print_sq(cuad, coord, cuad[0], ft_strlen(cuad[1]));
		}
		cont++;
	}
}
int arr_len(char **arr)
{
	int cont;
	int len;

	cont = 0;
	len = 0;
	while(arr[cont] != '\0')
	{
		len++;
		cont++;
	}
	return (len);
}

void cuadrad_stdio(void)
{
	char *tabla;
	int *coord;
	char **cuad;

	tabla = input_stdio();
	if (check_map(tabla) == -1)
	{
		write(1, "map error \n", 10);
	}
	else
	{
		cuad = ft_buffer(tabla);
		coord = cal_cuadrada(cuad, cuad[0], arr_len(cuad));
		ft_print_sq(cuad, coord, cuad[0], ft_strlen(cuad[1]));
	}
}

int main(int argc, char **argv)
{
	char **cuad;
	//int *coord;
	char *caract;
	int cont;
	int j;

	cont = 0;
	j = 0;
	if (argc == 1)
	{
		cuadrad_stdio();
	}
	else if (argc == 2)
	{
		cuad = ft_map(argv[1]);
		if (cuad == NULL)
			write(1, "map error \n", 10);
		else
		{
			caract = first_line(cuad);

			while(cuad[cont][j] != '\0')
			{
				printf("%c", cuad[cont][j]);
				j++;
			}
			//printf("%d", ft_strlen(cuad[1]));
			//coord = cal_cuadrada(cuad, caract, inptut_len(cuad));
			//ft_print_sq(cuad, coord, caract, ft_strlen(cuad[1]));
		}
	}
	else
		cuadrad_v_argc(argc, argv);
}
