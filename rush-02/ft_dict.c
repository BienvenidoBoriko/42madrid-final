/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrucesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:47:47 by acrucesp          #+#    #+#             */
/*   Updated: 2020/12/13 13:05:38 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct
{
	char *key;
	char *value;
}trad;

trad *ft_translate(char *dictionary);
void ft_printtranslate(trad *traductions, int dictlen);
int ft_dictlen(char *dict);

char	*ft_chrg(int fd, int sz)
{
	char *ptr;
	int i;

	i = 0;
	ptr = (char *)malloc((sz + 1) * sizeof(char *));
	while (read(fd, &ptr[i], 1))
	{
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		ft_sizef(int fd)
{
	int num;
	char *ptr;

	num = 0;
	while (read(fd, &ptr, 1))
		num++;
	return (num);
}

int		ft_openf(char *file)
{
	int fd;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	else
		return (fd);
}

char	*ft_dict(char *file)
{
	int fd;
	char *buff;
	int sz;

	fd = ft_openf(file);
	if (fd == -1)
		return (NULL);
	sz = ft_sizef(fd);
	close(fd);
	fd = ft_openf(file);
	buff = ft_chrg(fd,sz);
	close(fd);
	return (buff);
}

int		main(void)
{
	char *dict;
	trad *traductions;
	int dictlen;
	int size;

	dict = ft_dict("./numbers.dict");
	if (dict == NULL)
		return (0);
	printf("%s\n", dict);
	dictlen = ft_dictlen(dict);
	size = 0;
	while (dict[size])
	{
		size++;
	}
	printf("%i\n", size);
	traductions = ft_translate(dict);
	ft_printtranslate(traductions, dictlen);
	printf("%s", dict);
}
