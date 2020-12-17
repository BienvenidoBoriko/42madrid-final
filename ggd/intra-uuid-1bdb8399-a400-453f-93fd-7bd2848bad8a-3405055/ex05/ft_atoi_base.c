/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:26:58 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/09 22:28:03 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_error(char *base)
{
	char	*check;
	int		i;

	check = base;
	if (*base == 0 || (*base + 1) == 0)
		return (0);
	while (*check)
	{
		if (*check == '+' || *check == '-' || *check == ' ' || *check <= 31)
			return (0);
		i = 1;
		while ((*check + i))
		{
			if (*(check + i) == *check)
				return (0);
			i++;
		}
		check++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int		j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	return (j);
}

char	*inbase(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	num;
	int				neg;
	char			*string;

	num = 0;
	neg = 1;
	if (check_error(base))
	{
		string = str;
		while (*string == ' ' || (*string >= 9 && *string <= 13))
			string++;
		while (*string == '-' || *string == '+')
		{
			if (*string == '-')
				neg *= -1;
			string++;
		}
		while (inbase(base, string))
		{
			num *= ft_strlen(base);
			num += (inbase(base, string) - base);
			string++;
		}
	}
	return (num * neg);
}
