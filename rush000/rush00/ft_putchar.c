/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:01:28 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 11:10:04 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void	rush_auxiliar(int y, int primera_columna, int x, int primera_fila)
{
	if (y == primera_columna || y == 1)
	{
		if (x == primera_fila || x == 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (x == primera_fila || x == 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int		primera_fila;
	int		primera_columna;

	primera_fila = x;
	primera_columna = y;
	while (y > 0)
	{
		x = primera_fila;
		while (x > 0)
		{
			rush_auxiliar(y, primera_columna, x, primera_fila);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}

int		main(void)
{
	rush(1, 5);
}
