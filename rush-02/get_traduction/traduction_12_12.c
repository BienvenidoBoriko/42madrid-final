/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traduction.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 20:00:13 by mmunoz-f          #+#    #+#             */
/*   Updated: 2020/12/13 13:27:51 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct trad
{
	char *key;
	char *value;
}trad;

trad	ft_tradline(int line, char *dictionary);
int		ft_dictlen(char *dict);

trad	*ft_takemem(int dictlen)
{
	trad	*traductions;
	int i;
	int j;

	i = 0;
	j = 0;
	printf("%s\n", "pasas por aqui7");
	traductions = (trad *)malloc(dictlen * (sizeof(int) * 2));
	printf("%i\n", dictlen);
	while (i < dictlen)
	{
		traductions[i].key = malloc(sizeof(char) * 100);
		traductions[i].value = malloc(sizeof(char) * 100);
		i++;
	}
	printf("%i\n", i);
	printf("%s\n", "pasas por aqui8");
	return (traductions);
}

trad	*ft_translate(char *dictionary)
{
	trad	*traductions;
	int		dictlen;
	int		i;
	i = 0;
	printf("%s\n", "pasas por aqui6");
	dictlen = ft_dictlen(dictionary);
	printf("%i\n", dictlen);
	traductions = ft_takemem(dictlen);
	printf("%s\n", "pasas por aqui9");
	while (i < dictlen)
	{
		traductions[i] = ft_tradline(i, dictionary);
		i++;
	}

	printf("%s\n", "pasas por aqui10");
	
	return (traductions);
}

trad	ft_tradline(int line, char *dictionary)
{
	int i;
	int j;
	trad number;

	i = 0;
	j = 0;
	printf("%s\n", "pasas por aqui11");
	while (i < line)
	{
		while (dictionary[j++] != '\n')
		i++;
	}
	i = 0;
	printf("%s\n", "pasas por aqui12");
	while (dictionary[j] != ':')
	{
		number.key[i] = dictionary[j];
		j++;
		i++;
	}
	printf("%s\n", "pasas por aqui13");
	printf("%s\n", number.key);
	j++;
	i = 0;
	while (dictionary[j] != '\n')
	{
		number.value[i] = dictionary[j];
		i++;
		j++;
	}
	printf("%s\n", "pasas por aqui15");
	return(number);
}

int		ft_dictlen(char *arr_fil)
{
	int line;
   
   line = 0;
    while (*arr_fil)
    {
        if(*arr_fil == '\n')
        {
            line++;
        }
        arr_fil++;
    }
	printf("dict - lent = %d", line);
    return (line);
}

void	ft_printtranslate(trad *traductions, int dictlen)
{
	int i;

	i = 0;
	while (i < dictlen)
	{
		printf("%s : %s\n", traductions[i].key, traductions[i].value);
		i++;
	}
}
