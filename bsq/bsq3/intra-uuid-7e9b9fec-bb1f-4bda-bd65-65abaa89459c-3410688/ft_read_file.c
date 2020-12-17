/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:54:25 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 19:46:16 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "mapa.h"

int		ft_file_size(char *file)
{
	int		size;
	char	*c;
	int		input_fd;

	size = 0;
	input_fd = open(file, O_RDONLY);
	if (input_fd == -1)
	{
		write(1, "Open Error", 8);
		return (-1);
	}
	while (read(input_fd, &c, 1))
	{
		size++;
	}
	close(input_fd);
	return (size);
}

char	*ft_read_file(char *file)
{
	int				input_fd;
	int				read_in;
	char			*buffer;
	int				i;

	i = 0;
	if ((read_in = ft_file_size(file)) == -1)
		return (NULL);
	input_fd = open(file, O_RDONLY);
	if (input_fd == -1)
	{
		write(1, "Open Error", 8);
		return (NULL);
	}
	buffer = (char *)malloc(read_in * sizeof(char));
	read(input_fd, buffer, read_in);
	close(input_fd);
	return (buffer);
}

char	*ft_wr_map(char *buffer)
{
	while (*buffer != 10)
		buffer++;
	buffer++;
	return (buffer);
}

char	**ft_buffer(char *buffer)
{
	char	**map;
	int		col;
	int		lines;
	int		i;

	i = 0;
	lines = ft_line_numbers(buffer);
	//buffer = ft_wr_map(buffer);
	col = ft_strline(buffer);
	map = (char **)malloc(lines * sizeof(char *));
	while (i < lines)
	{
		map[i] = (char *)malloc(col * sizeof( char));
		i++;
	}
	map = ft_fillmap(map, buffer, i);
	return (map);
}

char	**ft_map(char *file)
{
	char	*buffer;
	char	**map;

	buffer = NULL;
	buffer = ft_read_file(file);
	if (buffer == NULL)
		return (NULL);
	if (check_map(buffer) == -1)
		return (NULL);
	map = ft_buffer(buffer);
	return (map);
}
