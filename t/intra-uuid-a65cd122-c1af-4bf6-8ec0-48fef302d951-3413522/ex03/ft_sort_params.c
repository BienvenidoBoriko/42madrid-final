/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 09:39:37 by pperez-m          #+#    #+#             */
/*   Updated: 2020/12/17 13:05:23 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len(char *str)
{
	int	ix;

	ix = 0;
	while (str[ix] != '\0')
		ix++;
	return (ix);
}

int		ft_strcmp(char *s1, char *s2)
{
	int strcmp;
	int	lena;
	int	lenb;
	int	i;

	lena = ft_len(s1);
	lenb = ft_len(s2);
	i = 0;
	if (lena == 0 && lenb == 0)
		strcmp = 0;
	else
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (s1[i] == s2[i])
				strcmp = 0;
			else
			{
				strcmp = (unsigned char)s1[i] - (unsigned char)s2[i];
				break ;
			}
			i++;
		}
	}
	return (strcmp);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int l;

	l = 1;
	while (l < argc)
	{
		i = 0;
		while (argv[l][i] != '\0')
		{
			write(1, &argv[l][i], 1);
			i++;
		}
		write(1, "\n", 1);
		l++;
	}
}

int		main(int argc, char **argv)
{
	int		j;
	int		k;
	char	*tmp;

	k = 0;
	while (k < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		k++;
	}
	ft_print_params(argc, argv);
	return (0);
}
