/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:13:41 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/16 15:54:05 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int cont;

	i = 1;
	cont = 0;
	if ((nb == 2) || (nb == 3))
		return (1);
	while (i <= nb)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % i == 0)
			cont++;
		if (cont > 2)
			return (0);
		i = i + 2;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
