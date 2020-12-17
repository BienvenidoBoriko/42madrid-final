/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:06:01 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 12:54:29 by bboriko-         ###   ########.fr       */
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

int es_c_especial(char c)
{
	char *caract;
	caract = "\t\n\v\f\r +";
	int cont;
	int es_espe;

	cont = 0;
	es_espe = 0;
	while(cont < 7)
	{
		if(c == caract[cont])
			es_espe++;
		cont++;
	}
	return (es_espe);
}

int		e_signo(char *str)
{
	int		signo;
	int		cont;

	signo = 1;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '-')
			signo = signo * -1;
		else if (!es_c_especial(str[cont]))
			break ;
		cont++;
	}
	if (signo < 0)
		write(1, "-", 1);
	return (cont);
}

int c_num_base(char *base, char caracter)
{
	int cont;

	cont = 0;
	while(*base != '\0')
	{
		if(caracter == *base)
			return (cont);
		cont++;
		base++;
	}
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

int		ft_atoi_base(char *str, char *base)
{
	int		l_b;
	int		cont;

	l_b = d_base(base);
	if (l_b != -1)
	{
		cont = e_signo(str);
		while (str[cont] != '\0')
		{
			if (str[cont] >= base[0] && str[cont] <= base[l_b - 1])
				ft_putnbr(c_num_base(base, str[cont]));
			else
				return (1);
			cont++;
		}
		return (1);
	}
	else
		return (0);
}
