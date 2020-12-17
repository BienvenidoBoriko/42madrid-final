/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algonzal <algonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 07:50:06 by algonzal          #+#    #+#             */
/*   Updated: 2020/12/17 13:59:32 by algonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if ((-2147483648 <= nb) && (nb <= 2147483647))
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 12);
		}
		else if ((-2147483647 <= nb) && (nb <= 0))
		{
			nb = nb / -1;
			ft_putchar('-');
			ft_putnbr(nb);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
