/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:01:27 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/09 22:33:08 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error(char *base)
{
	char	*check;
	int		j;

	check = base;
	if (base == 0 || (base + 1) == 0)
		return (0);
	while (*check)
	{
		if (*check == '+' || *check == '-' || *check <= 31)
			return (0);
		j = 1;
		while (*(check + j))
		{
			if (*(check + j) == *check)
				return (0);
			j++;
		}
		check++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*string;
	int		i;

	string = str;
	i = 0;
	while (*string != 0)
	{
		i++;
		string++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int l_base;
	unsigned int unsnbr;

	if (check_error(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			unsnbr = -1 * nbr;
		}
		else
			unsnbr = nbr;
		l_base = ft_strlen(base);
		if (unsnbr >= l_base)
		{
			ft_putnbr_base(unsnbr / l_base, base);
			ft_putnbr_base(unsnbr % l_base, base);
		}
		else
		{
			write(1, (base + unsnbr), 1);
		}
	}
}
