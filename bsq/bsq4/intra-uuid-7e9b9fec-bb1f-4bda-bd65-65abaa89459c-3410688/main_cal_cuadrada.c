/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_cal_cuadrada.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:15:26 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 21:35:25 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mapa.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*first_line(char **tab)
{
	int		i;
	char	*caract;

	i = ft_strlen(tab[0]);
	caract = (char*)malloc(i * sizeof(char));
	ft_strcpy(caract, tab[0]);
	return (caract);
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

void	cuadrad_v_argc(int argc, char **argv)
{
	char	**cuad;
	int		*coord;
	int		cont;
	char	*caract;

	cont = 1;
	while (cont < argc)
	{
		cuad = ft_map(argv[cont]);
		if (cuad == NULL)
			write(1, "map error \n", 10);
		else
		{
			caract = ft_read_file_line(argv[cont], 1);
			coord = cal_cuadrada(cuad, caract,
					ft_atoi(ft_read_file_line(argv[cont], 0)));
			ft_print_sq(cuad, coord, caract, ft_strlen(cuad[1]));
		}
		cont++;
		free(cuad);
	}
}

char *tr_carc(char *str)
{
	int len;
	char *caract;
	//printf("%s", "hola");
	caract = (char*)malloc(3 * sizeof(char));
	len = ft_strlen(str);
	caract[0] = str[len - 3];
	caract[1] = str[len - 2];
	caract[2] = str[len - 1];
	printf("%d",ft_strlen(str));
	return (caract);
}

char *tr(char *str)
{
	char *caract;

	caract = (char*)malloc(100 * sizeof(char));
	while(*str != '\n')
	{
		if(*str >= 33 && *str <= 127)
			*caract = *str;
		str++;
		caract++;
	}
	*caract = '\0';
	printf("%s", tr_carc(caract));
	caract = tr_carc(caract);
	return (caract);
}

void	cuadrad_stdio(void)
{
	char	*tabla;
	//int		*coord;
	char	**cuad;
	char *caract;

	tabla = input_stdio();
	if (check_map(tabla) == -1)
	{
		write(1, "map error \n", 10);
	}
	else
	{
		caract = tr(tabla);
		//sprintf()
		cuad = ft_buffer(tabla);
		//printf("%s",cuad[0]);
		//coord = cal_cuadrada(cuad, caract, arr_len(cuad));
		//ft_print_sq(cuad, coord, caract, arr_len(cuad));
	}
}

int		main(int argc, char **argv)
{
	char	**cuad;
	int		*coord;
	char	*caract;
	int		l;

	l = 0;
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
			l = ft_atoi(ft_read_file_line(argv[1], 0));
			caract = ft_read_file_line(argv[1], 1);
			coord = cal_cuadrada(cuad, caract, l);
			ft_print_sq(cuad, coord, caract, l);
		}
	}
	else
		cuadrad_v_argc(argc, argv);
}
