/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:50:04 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/09 17:50:07 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int e_signo(char *str);
int a_coin(char *base);
int ft_strlen(char *str);
unsigned int d_base(char *base);
int		e_signo2(char *str);

void rell_arr(char caract, char *str)
{
	//printf("%c", caract);
	while (*str != '\0')
		str++;
	*str = caract;
	str++;
	*str = '\0';
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

void ft_putnbr_base(int nbr, char *base, char *nbr_to)
{
	char caracter;
	unsigned int l_base;
	unsigned int nbrl;

	l_base = d_base(base);
	nbrl = nbr;
	if (l_base != 0)
	{
		if (nbrl >= l_base)
		{
			ft_putnbr_base(nbrl / l_base, base, nbr_to);
			caracter = base[nbrl % l_base];
			rell_arr(caracter, nbr_to);
		}
		if (nbrl < l_base && nbrl >= 0)
		{
			caracter = base[nbrl];
			rell_arr(caracter, nbr_to);
		}
	}
}

void		ft_putnbr(int nb, char *num2)
{
	char			caracter;
	unsigned int	nbl;

	nbl = nb;
	if (nb < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10, num2);
		ft_putnbr(nbl % 10, num2);
	}
	if (nbl <= 9 && nbl >= 0)
	{
		caracter = nbl + 48;
		rell_arr(caracter, num2);
	}
}

int per_a_base(char *base, char num)
{
	int esta;
	int cont;

	esta = 0;
	cont = 0;
	while (*base != '\0')
	{
		if (num == *base)
			return (cont);
		cont++;
		base++;
	}
	return (-1);
}

int ft_atoi_base_aux(char *str, char *base, char *nbr_to, char *num2)
{
	int esta;
	int cont;
	int cont2;
	int num;

	num = 0;
	cont = e_signo(str);
	cont2 = 0;
	while (str[cont] != '\0')
	{
		if (per_a_base(base, str[cont]) != -1)
		{
			//printf("%d", per_a_base(base, str[cont]));
			ft_putnbr(per_a_base(base, str[cont]), num2);
			cont2++;
		}
		else
			return (0);
		cont++;
	}
	return (num);
}

int pa_num(char *num3)
{
	int num;

	num = 0;
	while (*num3 != '\0')
	{
		num = num * 10 + (*num3 - '0');
		num3++; 
	}
	return (num);
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *nbr_to;
	int num;
	char *num2;
	int num3;

	num2 = (char*)malloc(ft_strlen(nbr) * 4 * sizeof(char));
	nbr_to = (char *)malloc((ft_strlen(nbr) * 4) * sizeof(char));
	if (d_base(base_from) != -1)
	{
		num2[0] = '\0';
		num = ft_atoi_base_aux(nbr, base_from, nbr_to, num2);
		printf("%d", pa_num(num2));
		if(e_signo2(nbr) == -1)
			nbr_to[0] = '-';
		ft_putnbr_base(num, base_to, nbr_to);
	}
	return (nbr_to);
}

int main(void)
{
	printf("%s", ft_convert_base("-328ad", "0123456789abcdef", "0123456789"));
}