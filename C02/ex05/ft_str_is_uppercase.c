/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:01:40 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/03 19:32:32 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		is_uppercase;
	int		len;

	len = 0;
	is_uppercase = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			is_uppercase++;
		}
		str++;
		len++;
	}
	if (len == 0 || len == is_uppercase)
		return (1);
	else
		return (0);
}
