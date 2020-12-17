/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:24:35 by asydykna          #+#    #+#             */
/*   Updated: 2020/12/13 12:08:06 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split_and_send(char *str, int key, int value, int offset);
void	ft_fill_array();
void	ft_translate(char ***arr, int rows, char *str);

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	*cp;

	if (str[0] == '\0')
	{
		return (1);
	}
	cp = str;
	while (*cp != '\0')
	{
		i = 0;
		if (!((cp[i] >= 65 && cp[i] <= 90) || (cp[i] >= 97 && cp[i] <= 122)))
		{
			return (0);
		}
		cp++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

char	**ft_split_string (char *str)
{
	int key;
	int offset;
	int value;
	char *start;
	char delimiter;

	key = 0;
	offset = 0;
	value = 0;
	delimiter = ':';
	start = str;

	while (*str != delimiter)
	{
		if (*str >= '0' && *str <= '9')
			key++;
		else
		{
		}
		str++;
	}
	offset = key;
	while (!ft_str_is_alpha(str))
	{
		str++;
		offset++;
	}
	while (ft_str_is_alpha(str) && *str != ' ' && *str != '\0')
	{
		str++;
		value++;
	}
	return (ft_split_and_send(start, key, value, offset));
}

char	**ft_split_and_send(char *str, int key, int value, int offset)
{
	char *pkey;
	char *pvalue;
	char **return_value;
	int i;

	pkey = (char*)malloc(key * sizeof(char));
	pvalue = (char*)malloc(value * sizeof(char));
	return_value = (char **)malloc(2 * sizeof(char **));
	i = 0;
	while (i < key)
	{
		pkey[i] = str[i];
		i++;
	}
	i = 0;
	while (i < value)
	{
		pvalue[i] = str[offset + i];
		i++;
	}
	return_value[0] = pkey;
	return_value[1] = pvalue;

	//check if we need to free here
	//free(pkey);
	//free(pvalue);
	return (return_value);
}



int	main()
{
	ft_fill_array();

}