/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:34:15 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/12/13 14:51:48 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	int size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_s;
	unsigned int	dest_s;
	unsigned int	c;

	src_s = ft_length(src);
	dest_s = ft_length(dest);
	c = 0;
	if (size <= dest_s)
		return (size + src_s);
	while (*dest)
		dest++;
	while ((c < size - dest_s - 1) && src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (src_s + dest_s);
}
