/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recojertrads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 18:40:44 by mmunoz-f          #+#    #+#             */
/*   Updated: 2020/12/12 18:54:56 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct
{
	char key;
	char value[10];
}trad;

int main()
{
	int fl;
	int i;
	int j;
	int k;
	char dict[100];
	char c;
	trad ocho;

	fl = open("num.dict", O_RDONLY);
	i = 0;
	while (read(fl, &dict[i], 1) && i < 100)
	{
		i++;
	}
	j = 0;
	c = '8';
	while (dict[j])
	{
		if (dict[j] == c)
			break;
		j++;
	}
	ocho.key = dict[j];
	j+= 3;
	k = 0;
	while (dict[j] != '\n')
	{
		ocho.value[k] = dict[j];
		k++;
		j++;
	}
	printf("%c\n%s\n", ocho.key, ocho.value);
	return 0;
}
