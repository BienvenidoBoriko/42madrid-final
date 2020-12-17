/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:12:24 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 21:13:09 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "mapa.h"

int		ft_file_size_line(char *file)
{
	int		size;
	char	c;
	int		input_fd;

	size = 0;
	input_fd = open(file, O_RDONLY);
	if (input_fd == -1)
	{
		return (-1);
	}
	while (read(input_fd, &c, 1))
	{
		size++;
		if (c == 10)
		{
			close(input_fd);
			return (size);
		}
	}
	close(input_fd);
	return (size);
}

char	*ft_read_file_line(char *file, int n)
{
	int				input_fd;
	int				read_in;
	char			*buffer;
	int				i;

	i = 0;
	if ((read_in = ft_file_size_line(file)) == -1)
		return (NULL);
	input_fd = open(file, O_RDONLY);
	if (input_fd == -1)
	{
		return (NULL);
	}
	buffer = (char *)malloc(read_in * sizeof(char));
	read(input_fd, buffer, read_in);
	if (n == 1)
		buffer = ft_cells(buffer);
	else
		buffer = ft_nl(buffer);
	close(input_fd);
	return (buffer);
}

char	*ft_cells(char *str)
{
	int		i;

	i = 0;
	while (i <= (ft_strline(str) - 3))
	{
		str++;
		i++;
	}
	return (str);
}

char	*ft_nl(char *str)
{
	int		i;
	char	*lines;
	int		j;

	i = 0;
	j = 0;
	lines = str;
	j = ft_strline(str);
	while (*str > 47 && *str < 58 && i < j - 3)
	{
		str++;
		i++;
	}
	*str = '\0';
	return (lines);
}
