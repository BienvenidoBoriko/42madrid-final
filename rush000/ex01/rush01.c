/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:04:00 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 12:04:31 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char caracter);

void	rush_auxiliar(int y, int p_f, int x, int p_c)
{
	if (y == 1 || y == p_f)
	{
		if ((y == p_f && x == p_c) || (x == 1 && y == 1 && p_f > 1 && p_c > 1))
			ft_putchar('/');
		else if ((x == 1 && y == p_f) || (x == p_c && y == 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if (x == p_c || x == 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int p_f;
	int p_c;

	p_c = x;
	p_f = y;
	while (y > 0)
	{
		x = p_c;
		while (x > 0)
		{
			rush_auxiliar(y, p_f, x, p_c);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
