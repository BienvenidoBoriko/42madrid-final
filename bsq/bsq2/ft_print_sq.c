/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:19:43 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 09:46:11 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mapa.h"

void	ft_print_sq(char **cuad,
		int *cart, char *caract)
{
	int	cont;
	int	cont2;

	cont = cart[0];
	cont2 = cart[1];
	while (cont2 >= 0)
	{
		while (cont > 0)
		{
			cuad[cont2][cart[2] - (cont - 1)] = caract[2];
			cont--;
		}
		cont = cart[0];
		cont2 = cont2 - 1;
	}
	cont = 0;
	cont2 = 0;
	while (cuad[cont] != '\0')
	{
		while (cuad[cont][cont2] != '\0')
		{
			write(1, &cuad[cont][cont2], 1);
			cont2++;
		}
		write(1, "\n", 1);
		cont2 = 0;
		cont++;
	}
}
