/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:07:09 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 12:44:22 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char caracter);

void	rush_auxiliar(int y, int primera_columna, int x, int primera_fila)
{
	if (y == primera_fila)
	{
		if (x == primera_columna || x == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (y == 1)
	{
		if (x == primera_columna || x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (x == primera_columna || x == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		primera_fila;
	int		primera_columna;

	primera_columna = x;
	primera_fila = y;
	while (y > 0)
	{
		x = primera_columna;
		while (x > 0)
		{
			rush_auxiliar(y, primera_columna, x, primera_fila);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
