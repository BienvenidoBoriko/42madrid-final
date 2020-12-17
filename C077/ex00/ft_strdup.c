/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:00:16 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/17 17:57:42 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
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

char	*ft_strdup(char *src)
{
	char	*ref;

	ref = malloc(sizeof(*src));
	if (*src == '\0')
		return (NULL);
	else
		return (ft_strcpy(ref, src));
}
