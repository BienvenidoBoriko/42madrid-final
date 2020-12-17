/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:05:25 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 11:00:51 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void	rush_auxiliar(int y, int primera_columna, int x, int primera_fila)
{
	if (x == primera_fila || x == 1)
	{
		 if(y==primera_columna )
			ft_putchar('A');
		else if(y==1)
			ft_putchar('C');
		else
			ft_putchar('B'); 
	}
	else
	{
		if (y == primera_columna || y == 1)
		{
			ft_putchar('B');
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
	while (x > 0)
	{
		y = primera_fila;
		while (y > 0)
		{
			rush_auxiliar(y, primera_columna, x, primera_fila);
			y--;
		}
		ft_putchar('\n');
		x--;
	}
}

int		main(void)
{
	rush(4, 4);
}
