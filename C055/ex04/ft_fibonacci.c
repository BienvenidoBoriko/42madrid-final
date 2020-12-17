/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:13:52 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/11 14:07:18 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (0);
}
