/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leyend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:48:07 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/15 12:49:13 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mapa.h"
#include <stdio.h>

int		ft_line_numbers(char *str)
{
	int		j;
	int		i;
	char	lines[20];

	j = 0;
	i = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		lines[i] = str[i];
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == 10)
			j++;
		i++;
	}
	j--;
	if (ft_atoi(lines) != j)
	{
		write(1, "map error", 9);
		return (0);
	}
	return (j);
}

char	ft_typecell(char *str, int n)
{
	char	empty;
	char	*temp;

	empty = '\0';
	while (*str > 47 && *str < 58)
		str++;
	temp = str;
	if ((*temp == *(temp + 1)) || (*temp == *(temp + 2)) ||
				(*(temp + 1) == *(temp + 2)))
	{
		write(1, "map error", 9);
		return ('\0');
	}
	str = str + n;
	return (*str);
}

int		ft_ch_mapcell(char *str)
{
	char	*temp;

	temp = ft_wr_map(str);
	while (*temp != '\0')
	{
		if (*temp != ft_typecell(str, 0) &&
				*temp != ft_typecell(str, 1) &&
					*temp != ft_typecell(str, 2) &&
					*temp != 10)
		{
			write(1, "map error\n", 10);
			return (0);
		}
		temp++;
	}
	return (1);
}
