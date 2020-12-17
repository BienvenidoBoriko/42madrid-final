/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:05:44 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/16 15:06:07 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int i;
	int p;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power == 0)
		return (1);
	i = 0;
	p = nb;
	p *= (ft_recursive_power(nb, power - 1));
	return (p);
}
