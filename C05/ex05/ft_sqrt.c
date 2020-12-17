/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:06 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/14 21:56:15 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int num;
	int result;

	num = 0;
	while (++num <= 47350)
	{
		result = num * num;
		if (result == nb)
			return (num);
	}
	return (0);
}

int main(void)
{
	printf("%d",ft_sqrt(145));
}