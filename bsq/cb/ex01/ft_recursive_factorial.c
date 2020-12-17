/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:59:12 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/16 15:25:59 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int f;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	f = nb;
	f = f * (ft_recursive_factorial(nb - 1));
	return (f);
}
