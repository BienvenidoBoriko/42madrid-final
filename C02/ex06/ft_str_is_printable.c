/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:07:09 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/03 19:39:15 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		is_alpha;
	int		len;

	len = 0;
	is_alpha = 0;
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
		{
			is_alpha++;
		}
		str++;
		len++;
	}
	if (len == 0 || len == is_alpha)
		return (1);
	else
		return (0);
}
