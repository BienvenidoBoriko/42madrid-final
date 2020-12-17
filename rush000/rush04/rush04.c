/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:43:31 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 11:43:49 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void rush_auxiliar(int y, int p_f, int x, int p_c)
{
	if (x == 1 || x == p_f)
	{
		if ((x == p_f && y == p_c) || (x == 1 && y == 1 && p_f > 1 && p_c > 1))
			ft_putchar('A');
		else if ((y == 1 && x == p_f) || (y == p_c && x == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (y == p_c || y == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void rush(int x, int y)
{
	int p_f;
	int p_c;

	p_f = x;
	p_c = y;
	while (x > 0)
	{
		y = p_c;
		while (y > 0)
		{
			rush_auxiliar(y, p_f, x, p_c);
			y--;
		}
		ft_putchar('\n');
		x--;
	}
}

int main(void)
{
	rush(4, 3);
	return (0);
}
