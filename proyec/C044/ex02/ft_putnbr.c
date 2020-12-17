/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:05:00 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 13:52:25 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	caracter;
	unsigned int nbl;

	nbl = nb;
	if (nb < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	if (nbl <= 9 && nbl >= 0)
	{
		caracter = nbl + 48;
		write(1, &caracter, 1);
	}
}
