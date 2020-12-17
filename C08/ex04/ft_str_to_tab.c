/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 20:58:57 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/17 21:11:45 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
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

char				*ft_strcpy(char *dest, char *src)
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			cont;
	int			len;
	t_stock_str	*stru;

	cont = 0;
	if (ac > 0)
	{
		stru = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str));
		while (cont < ac)
		{
			len = ft_strlen(av[cont]);
			stru[cont].size = len;
			stru[cont].str = (char*)malloc((len + 1) * sizeof(char*));
			stru[cont].copy = (char*)malloc((len + 1) * sizeof(char*));
			ft_strcpy(stru[cont].str, av[cont]);
			ft_strcpy(stru[cont].copy, av[cont]);
			cont++;
		}
		stru[cont].str = (char*)malloc((len + 1) * sizeof(char*));
		ft_strcpy(stru[cont].str, av[cont]);
		return (stru);
	}
	else
		return (NULL);
}
