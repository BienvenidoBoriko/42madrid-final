/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:13:37 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/26 17:55:46 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	auxiliar;
	int		numero;

	numero = 0;
	while (numero <= 9)
	{
		auxiliar = numero + '0';
		write(1, &auxiliar, 1);
		numero++;
	}
}

int		main(void)
{
	ft_print_numbers();
}
