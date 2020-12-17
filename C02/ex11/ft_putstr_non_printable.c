/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:50:05 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/07 15:25:53 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int decimal, char *str)
{
	char	c_decimal;
	char	*caracteres;

	caracteres = "abcdef";
	if (decimal >= 10 && decimal < 16)
	{
		c_decimal = (caracteres[decimal - 10]);
		write(1, "\\0", 2);
		write(1, &c_decimal, 1);
	}
	else
	{
		write(1, "\\", 1);
		c_decimal = (decimal / 16) + '0';
		write(1, &c_decimal, 1);
		if (*str > 10)
			c_decimal = caracteres[decimal % 16];
		else
			c_decimal = (decimal % 16) + '0';
		write(1, &c_decimal, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		decimal;
	int		contador;

	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 31)
		{
			contador = 0;
			decimal = ((int)*str);
			imprimir(decimal, str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
