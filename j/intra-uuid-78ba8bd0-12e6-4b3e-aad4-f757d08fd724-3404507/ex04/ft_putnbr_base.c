/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:08:43 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 12:49:30 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int i;
	int n;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		n = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[n])
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int b_size;
	int nb[100];
	int i;

	i = 0;
	b_size = 0;
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[b_size])
			b_size++;
		while (nbr)
		{
			nb[i] = nbr % b_size;
			nbr = nbr / b_size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nb[i]]);
	}
}
