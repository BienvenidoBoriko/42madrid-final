/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:37:09 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/10 21:31:52 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		array_len(char **str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ordenar(char **tab, int size)
{
	char	*auxiliar;
	int		contador;
	int		ordenado;

	ordenado = 0;
	while (ordenado != 1)
	{
		contador = 1;
		ordenado = 1;
		while (size - 1 > contador)
		{
			if (ft_strcmp(tab[contador], tab[contador + 1]) == 1)
			{
				auxiliar = tab[contador + 1];
				tab[contador + 1] = tab[contador];
				tab[contador] = auxiliar;
				ordenado++;
			}
			contador++;
		}
	}
}

int		main(int argc, char **argv)
{
	int		cont;
	int		len;

	argc = 0;
	len = array_len(argv);
	ordenar(argv, len);
	cont = 1;
	while (cont < len)
	{
		ft_putstr(argv[cont]);
		cont++;
	}
}
