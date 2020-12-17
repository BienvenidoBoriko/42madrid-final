/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:21:53 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/30 19:29:56 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int numero)
{
	char	array_numero[32];
	int		contador;
	char	caracter;
	int		numero_dado;

	numero_dado = numero;
	contador = 0;
	while (numero > 9 || (numero != 0 && numero < -9))
	{
		array_numero[contador] = numero % 10;
		numero = numero / 10;
		contador++;
	}
	array_numero[contador] = numero;
	if (numero_dado < 0)
		write(1, "-", 1);
	while (contador >= 0)
	{
		if (numero_dado < 0)
			caracter = (array_numero[contador] * -1) + '0';
		else
			caracter = array_numero[contador] + '0';
		write(1, &caracter, 1);
		contador--;
	}
}

int		main(void)
{
	ft_putnbr(-4487699);
}
