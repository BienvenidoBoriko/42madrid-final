/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrera <ccarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:23:44 by ccarrera          #+#    #+#             */
/*   Updated: 2020/12/17 13:32:16 by ccarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int y;

	(void)argc;
	y = 0;
	while (argv[0][y])
	{
		write(1, &argv[0][y], 1);
		y++;
	}
	write(1, "\n", 1);
}
