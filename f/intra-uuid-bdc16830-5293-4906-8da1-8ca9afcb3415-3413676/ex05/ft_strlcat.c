/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:49:37 by mtorrado          #+#    #+#             */
/*   Updated: 2020/12/17 15:43:59 by mtorrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ret;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[j] != '\0')
		j++;
	if (src[0] == '\0')
		return (0);
	while (dest[i] != '\0')
		i++;
	ret = i + j;
	if (size <= i)
		return (size + j);
	while (i <= (size - 2))
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (ret);
}
