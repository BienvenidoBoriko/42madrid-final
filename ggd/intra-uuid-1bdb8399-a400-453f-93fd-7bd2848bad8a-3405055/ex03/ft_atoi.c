/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:33:37 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/09 22:34:54 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	char	*string;
	int		neg;
	int		num;

	num = 0;
	neg = 0;
	string = str;
	while (*string == ' ' || (*string >= 9 && *string <= 13))
		string++;
	while (*string == '-' || *string == '+')
	{
		if (*string == '-')
			neg += -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		num *= 10;
		num += *string - '0';
		string++;
	}
	if (neg % 2 < 0)
		return (num * -1);
	else
		return (num);
}
