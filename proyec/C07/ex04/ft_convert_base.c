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
    int cont;
    char *numero;

	l_base = d_base(base);
	nbrl = nbr;
	if (l_base != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbrl = nbr * -1;
		}
        while(nbrl >= l_base)
        {
            nbrl = nbrl / l_base, base;
            *numero = base[nbrl % l_base];
            numero++;
        }
		*numero = base[nbrl % l_base];
	}
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		l_b;
	int		cont;
    char    *numero;

	l_b = d_base(base_from);
	if (l_b != -1)
	{
		cont = e_signo(nbr);
		while (nbr[cont] != '\0')
		{
			if (nbr[cont] >= base_from[0] && nbr[cont] <= base_from[l_b - 1])
				*numero = ft_putnbr_base(c_num_base(base_from, nbr[cont]), base_to);
			else
				return (NULL);
			cont++;
            numero++;
		}
		return (numero);
	}
	else
		return (NULL);
}
