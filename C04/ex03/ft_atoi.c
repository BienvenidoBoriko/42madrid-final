/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:05:21 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/09 21:50:38 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
