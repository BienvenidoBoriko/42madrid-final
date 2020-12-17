/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:05:44 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 13:03:08 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		a_coin(char *base)
{
	char	*ref1;
	char	*ref2;
	int		cont;

	ref1 = base;
	ref2 = base;
	cont = 0;
	while (*ref1 != '\0')
	{
		ref2 = ref1;
		ref2++;
		while (*ref2 != '\0')
		{
			if (*ref2 == *ref1)
			{
				return (-1);
			}
			ref2++;
		}
		ref1++;
	}
	return (1);
}

unsigned int	d_base(char *base)
{
	unsigned int	len;
	int		coin;

	len = 0;
	coin = a_coin(base);
	if (coin == -1)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
		len++;
	}
	if (len > 1)
		return (len);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	caracter;
	unsigned int	l_base;
	unsigned int nbrl;

	l_base = d_base(base);
	nbrl = nbr;
	if (l_base != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbrl = nbr * -1;
		}
		if (nbrl >= l_base)
		{
			ft_putnbr_base(nbrl / l_base, base);
			caracter = base[nbrl % l_base];
			write(1, &caracter, 1);
		}
		if (nbrl < l_base && nbrl >= 0)
		{
			caracter = base[nbrl];
			write(1, &caracter, 1);
		}
	}
}
