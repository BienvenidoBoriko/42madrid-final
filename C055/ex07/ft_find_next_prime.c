/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:30 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/11 14:13:26 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		cont1;
	int		primo;
	int		siguiente;

	cont1 = 1;
	siguiente = nb + 1;
	primo = 0;
	while (cont1 <= siguiente)
	{
		if (siguiente % cont1 == 0)
			primo++;
		cont1++;
	}
	if (primo == 2)
		return (siguiente);
	else
		return (ft_find_next_prime(siguiente));
	return (-1);
}
