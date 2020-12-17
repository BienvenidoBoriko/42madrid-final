/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:56:05 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/03 19:27:42 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		is_lowercase;
	int		len;

	len = 0;
	is_lowercase = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			is_lowercase++;
		}
		str++;
		len++;
	}
	if (len == 0 || len == is_lowercase)
		return (1);
	else
		return (0);
}
