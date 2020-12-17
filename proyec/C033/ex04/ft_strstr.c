/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:58:47 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/07 17:18:59 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strstr(char *str, char *to_find);

int		string_len(char *str)
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

void	cambiar(char *to_find, char *ref, int *igual)
{
	to_find = ref;
	igual = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ref;
	int		igual;
	int		cont;
	int		len;

	ref = to_find;
	cont = 0;
	igual = 0;
	len = string_len(to_find);
	if (len == 0)
		return (str);
	while (str[cont] != '\0')
	{
		if (str[cont] == *to_find)
		{
			igual++;
			if (len == igual)
				return (&str[cont - len + 1]);
			to_find++;
		}
		else
			cambiar(to_find, ref, &igual);
		cont++;
	}
	return (0);
}
