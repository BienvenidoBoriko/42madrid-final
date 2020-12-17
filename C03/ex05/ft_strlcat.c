/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:59:17 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/09 19:14:58 by bboriko-         ###   ########.fr       */
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
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = ft_length(src);
	dest_size = ft_length(dest);
	i = 0;
	if (size <= dest_size)
		return (size + src_size);
	while (*dest)
		dest++;
	while ((i < size - dest_size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size + dest_size);
}
