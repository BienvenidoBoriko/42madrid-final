#include "mapa.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	empty;
char	obst;
char	fill;
int		lines;

/*void	ft_get_params(char *params)
{
	lines = ft_line_numbers(params);
	empty = ft_typecell(params, 0);
	obst = ft_typecell(params, 1);
	fill = ft_typecell(params, 2);
}*/

/*int main(void)
{
    char **cuad;
    int cont;
	int cont2;
    cont = 0;
    int *coord;
    char *caract = ".ox";
	char file[] = "example_file";

	cont2 = 0;
	cuad = ft_map(file);
	if (cuad == NULL)
		return (-1);
    coord = cal_cuadrada(cuad, caract, 9);
	ft_print_sq(cuad, coord, caract);
	printf("%d %d %d",coord[0], coord[1], coord[2]);
}

/*int main (int argc, char **argv)
{
	char	**tab;
	int		cont;

	tab = NULL;
	cont = 0;
	if (argc == 1)
	{
		argv = NULL;
		//ft_get_params(inc_pr_linia());
		//printf("\n%d,%c,%c,%c", lines, empty, obst, fill);
		tab = entr_standar();
    	if(tab == NULL)
    	{
        	printf("error77");
    	}
		else
    	{
			cont = 1;
       		while(tab[cont])
    		{
        		printf("%s", tab[cont]);
        		cont++;
    		}
    	}
		//ft_get_params(inc_pr_linia());
		//printf("\n%d,%c,%c,%c", lines, empty, obst, fill);
	}
	exit (0);
<<<<<<< HEAD
}
=======
}*/
/*
int main()
{
	char file[]="example_file2";
	char *buffer;

	buffer = NULL;
	buffer = ft_read_file(file);
	ft_line_numbers(buffer);
	printf("\n carac %c", ft_typecell(buffer, 0));
	printf("\n carac %c", ft_typecell(buffer, 1));
	printf("\n carac %c", ft_typecell(buffer, 2));
	printf("\ntiene el mapa algun car distinto ?%d",ft_ch_mapcell(buffer));
}
*/
>>>>>>> ca1c3bef6562ab4093de00919ffbf72463faa5da
