/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:06:01 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/10 19:36:02 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		a_coin(char *base)
{
	char	*ref1;
	char	*ref2;

	ref1 = base;
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

int		d_base(char *base)
{
	int		len;
	int		coin;

	len = 0;
	coin = a_coin(base);
	if (coin == -1)
		return (-1);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (-1);
		base++;
		len++;
	}
	if (len > 1)
		return (len);
	else
		return (-1);
}

void	ft_putnbr(int nb)
{
	char	caracter;
	unsigned int nbl;

	nbl = nb;
	if (nb < 0)
	{
		nbl = nbl * -1;
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
	if (neg % 2 < 0)
		write(1, "-", 1);
	return (cont);
}

int		ft_atoi_base(char *str, char *base)
{
	char	*ref_b;
	int		esta;
	int		cont;
	int		cont2;

	if (d_base(base) != -1)
	{
		cont = e_signo(str);
		while (str[cont] != '\0')
		{
			ref_b = base;
			cont2 = 0;
			esta = 0;
			while (*ref_b != '\0')
			{
				if (str[cont] == *ref_b)
				{
					esta = 1;
					break ;
				}
				cont2++;
				ref_b++;
			}
			if (esta == 1)
				ft_putnbr(cont2);
			else
				return (0);
			cont++;
		}
	}
	return (1);
}


int main(void)
{
	printf("%d", ft_atoi_base("-011", "01"));
}