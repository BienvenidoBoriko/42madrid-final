/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 19:08:35 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 09:41:25 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mapa.h"
#include <unistd.h>
#include <stdio.h>

int		check_map(char *map)
{
	int		lines;

	lines = ft_line_numbers(map);
	if (lines == -1)
		return (-1);
	if (ft_ch_mapcell(map) == -1)
		return (-1);
	if (ft_col_num(map) == -1)
		return (-1);
	return (0);
}
