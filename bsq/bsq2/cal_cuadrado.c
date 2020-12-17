/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_cuadrado.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 21:40:41 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/15 15:19:18 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "mapa.h"

/** 
* modulo cal_cuadrado 
* funcion de entrada cal_cuadrada(char **cuad, char *caract, int num_filas)
* devuelve un arry[3] -> post uno es el numero mas alto
* y los demas las cordenadas
*/
int		b_num_mayor(int lines, int **tab, int line_len, int *n_mayor)
{
	int		f;
	int		c;

	f = 0;
	if (lines < 1)
		return (-1);
	while (f < lines)
	{
		c = 0;
		while (c < line_len)
		{
			if (tab[f][c] > n_mayor[0])
			{
				n_mayor[0] = tab[f][c];
				n_mayor[1] = f;
				n_mayor[2] = c;
			}
			c++;
		}
		f++;
	}
	return (1);
}

void	cal_cuadra_aux(int lines, int **tab, int line_len)
{
	int		f;
	int		c;
	int		m;

	f = 0;
	while (f < lines)
	{
		c = 0;
		while (c < line_len)
		{
			if (c == 0 && tab[f][c] != 0)
				tab[f][c] = 1;
			else if (f == 0 && tab[f][c] != 0)
				tab[f][c] = 1;
			else if (c != 0 && f != 0 && tab[f][c] != 0)
			{
				m = m_de_t(tab[f][c - 1], tab[f - 1][c], tab[f - 1][c - 1]);
				tab[f][c] = m + 1;
			}
			c++;
		}
		f++;
	}
}

int		*cal_cuadrada(char **cuad, char *caract, int num_filas)
{
	int		**tab;
	int		*coord;
	int		num_col;

	num_col = ft_strlen(cuad[0]);
	coord = (int *)malloc(3 * sizeof(int));
	tab = rell_cuad_aux(num_filas, caract, cuad);
	cal_cuadra_aux(num_filas, tab, num_col);
	b_num_mayor(num_filas, tab, num_col, coord);
	return (coord);
}
/*
int		main(void)
{
	char	**cuad;
	int		cont;
	cont = 0;
	int *coord;
	char *caract = ".ox";
	cuad = (char**)malloc(9 * sizeof(char**));
	while (cont < 9)
	{
		cuad[cont] = (char*)malloc(27 * sizeof(char));
		cont++;
	}
	ft_strcpy(cuad[0], "..o.........o......o.....o.");
	ft_strcpy(cuad[1], "............o......o.....o.");
	ft_strcpy(cuad[2], "....o.......o......o.....o.");
	ft_strcpy(cuad[3], "............o......o.....o.");
	ft_strcpy(cuad[4], "............o......o.....o.");
	ft_strcpy(cuad[5], "......o............o.....o.");
	ft_strcpy(cuad[6], "............o...o..o.....o.");
	ft_strcpy(cuad[7], "............o......o.....o.");
	ft_strcpy(cuad[8], "...o........o......o.....o.");
	coord = cal_cuadrada(cuad, caract, 9);
	printf("%d\n", coord[0]);
	printf("%d\n", coord[1]);
	printf("%d\n", coord[2]);
}*/
