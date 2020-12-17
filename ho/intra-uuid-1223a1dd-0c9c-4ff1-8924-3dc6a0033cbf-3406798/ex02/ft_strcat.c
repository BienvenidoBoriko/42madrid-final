/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:49:59 by hmrabet-          #+#    #+#             */
/*   Updated: 2020/12/10 15:07:11 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int c;
	int i;

	c = 0;
	i = ft_strlen(dest);
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
