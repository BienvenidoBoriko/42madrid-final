/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:19:43 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 19:34:14 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mapa.h"

void	ft_print_sq(char **cuad,
		int *cart, char *caract, int lines)
{
	int	cont;
	int fila;
	int	cont2;

	cont = cart[0];
	cont2 = cart[1];
	fila = cart[0];
	while (fila > 0)
	{
		while (cont > 0)
		{
			cuad[cont2][cart[2] - (cont - 1)] = caract[2];
			cont--;
		}
		cont = cart[0];
		cont2 = cont2 - 1;
		fila--;
	}
	ft_print_sq2(cuad, lines);
}

void	ft_print_sq2(char **cuad, int lines)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (lines > 0)
	{
		while (cuad[i][j] != '\0')
		{
			write(1, &cuad[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
		lines--;
	}
}
