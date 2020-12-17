/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrera <ccarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 08:24:48 by ccarrera          #+#    #+#             */
/*   Updated: 2020/12/17 13:34:23 by ccarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	main(int argc, char **argv)
{
	int x;
	int y;

	x = argc - 1;
	while ((x < argc) && (x > 0))
	{
		y = 0;
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
