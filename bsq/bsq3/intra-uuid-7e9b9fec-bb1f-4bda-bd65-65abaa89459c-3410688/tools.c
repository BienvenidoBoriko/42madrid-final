/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:53:39 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 19:33:59 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mapa.h"
#include <stdio.h>

int		ft_strline(char *str)
{
	int		col;
	int		n;

	col = 0;
	n = 0;
	while (*str != '\0' && n == 0)
	{
		while (*str != 10)
		{
			col++;
			n++;
			str++;
		}
	}
	return (col);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ref;

	ref = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ref);
}

char	**ft_fillmap(char **map, char *buffer, int lines)
{
	int		i;
	int		col;

	i = 0;
	col = 0;
	while (i < lines)
	{
		while (*buffer != 10 && *buffer != '\0')
		{
			map[i][col] = *buffer;
			col++;
			buffer++;
		}
		map[i][col] = '\0';
		buffer++;
		col = 0;
		i++;
	}
	return (map);
}

char	*ft_strcat(char *dest, char *src)
{
	char *c_s1;

	c_s1 = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c_s1);
}