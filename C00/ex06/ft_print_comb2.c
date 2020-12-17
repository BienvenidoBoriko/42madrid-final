/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:52:21 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 14:12:18 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	imprimir(int x, int y)
{
	char	primer_caracter;
	char	segundo_caracter;

	primer_caracter = (x / 10) + '0';
	segundo_caracter = (x % 10) + '0';
	write(1, &primer_caracter, 1);
	write(1, &segundo_caracter, 1);
	write(1, " ", 1);
	primer_caracter = (y / 10) + '0';
	segundo_caracter = (y % 10) + '0';
	write(1, &primer_caracter, 1);
	write(1, &segundo_caracter, 1);
	if (x != 98 || y != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = 0;
		while (y <= 99)
		{
			if (x < y)
			{
				imprimir(x, y);
			}
			y++;
		}
		x++;
	}
}
