/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:58:47 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:32 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_length(char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (to_find[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*found;
	char	*to_find_ref;
	int		i;

	i = 1;
	found = str;
	to_find_ref = to_find;
	if (!ft_length(to_find))
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (str[i] && to_find[i])
		{
			if (str[i] != to_find[i])
				break ;
			i++;
		}
		if (i == ft_length(to_find))
			return (str);
		str++;
	}
	return (NULL);
}
