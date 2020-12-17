/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:51:51 by jlopez-r          #+#    #+#             */
/*   Updated: 2020/12/13 13:08:50 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_zero_adder(char **tab, char **argv)
{
	int k;
	int i;
	int r;

	r = 0;
	i = 0;
	k = 0;
	if (ft_strlen(argv) % 3 == 1)
	{
		tab[i][r] = '0';
		tab[i][r + 1] = '0';
		tab[i][r + 2] = argv[1][k];
		k++;
	}
	if (ft_strlen(argv) % 3 == 2)
	{
		tab[i][r] = '0';
		tab[i][r + 1] = argv[1][k];
		tab[i][r + 2] = argv[1][k + 1];
		k = k + 2;
	}
	return (k);
}

char	*ft_slicer(char **argv)
{
	int		i;
	int		r;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * ft_strlen(argv) / 3);
	while (i < ((ft_strlen(argv) / 3) + 1))
	{
		tab[i] = malloc(sizeof(char *) * 3);
		r = 0;
		if (ft_strlen(argv) % 3 != 0 && i == 0)
		{
			k = ft_zero_adder(tab, argv);
			i++;
		}
		while (r < 3 && k < ft_strlen(argv))
		{
			tab[i] = malloc(sizeof(char *) * 3);
			tab[i][r] = argv[1][k];
			r++;
			k++;
		}
		i++;
	}
	return (*tab);
}

int		main(int argc, char *argv[])
{
	char *ptr2;

	argc = 1;
	ptr2 = ft_slicer(argv);
	return (0);
}
