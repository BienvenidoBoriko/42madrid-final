/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:15:02 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/03 19:17:19 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		is_alpha;
	int		len;

	len = 0;
	is_alpha = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			is_alpha++;
		}
		else if (*str >= 'a' && *str <= 'z')
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
