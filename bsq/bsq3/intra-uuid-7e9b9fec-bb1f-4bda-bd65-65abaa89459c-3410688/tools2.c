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
		write(1, "Open Error", 8);
		return (-1);
	}
	while (read(input_fd, &c, 1))
	{
		size++;
		//printf("Size %d",size);
		if (c == 10)
		{
			//printf("Size :%d",size);
			close(input_fd);
			return(size);
		}
	}
	close(input_fd);
	return (size);
}

char	*ft_read_file_line(char *file)
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
		write(1, "Open Error", 8);
		return (NULL);
	}
	buffer = (char *)malloc(read_in * sizeof(char));
	read(input_fd, buffer, read_in);
	buffer = ft_cells(buffer);
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
