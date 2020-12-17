/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:20:44 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/03 19:54:36 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*ref_dest;
	int		n;

	n = 0;
	ref_dest = dest;
	while (*src != '\0')
	{
		if (size > 1)
		{
			*dest = *src;
			dest++;
			size--;
		}
		src++;
		n++;
	}
	*dest = '\0';
	dest = ref_dest;
	return (n);
}
