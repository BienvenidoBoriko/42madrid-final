/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:52:21 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 14:00:27 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

void ft_print_comb2(void)
{
	int x;
	int y;
	char	primerCaracter;
	char	segundoCaracter;

	x = 0;
	while (x <= 98)
	{
		y = 0;
		while (y <= 99)
		{
			if(x < y)
			{	
				primerCaracter = (x / 10) + '0';
				segundoCaracter = (x % 10) + '0';
				write(1, &primerCaracter, 1);
				write(1, &segundoCaracter, 1);
				write(1, " ", 1);
				primerCaracter = (y / 10) + '0';
				segundoCaracter = (y % 10) + '0';
				write(1, &primerCaracter, 1);
				write(1, &segundoCaracter, 1);
				if(y  !=  99 || x != 98)
				{
					write(1, ", ", 2);
				}
			}
			y++;
		}
		x++;
	}
}

int main(void)
{
	ft_print_comb2();
}
