/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:50:14 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/09 17:50:18 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base, char *nbr_to, int neg);

int		e_signo(char *str)
{
	int		cont;
	int		neg;

	cont = 0;
	neg = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
		cont++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg += -1;
		str++;
		cont++;
	}
	return (cont);
}

int		e_signo2(char *str)
{
	int		cont;
	int		neg;

	cont = 0;
	neg = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
		cont++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg += -1;
		str++;
		cont++;
	}
	if (neg % 2 < 0)
		return (-1);
	return (1);
}

int					a_coin(char *base)
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

unsigned int		d_base(char *base)
{
	unsigned int	len;
	int				coin;

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