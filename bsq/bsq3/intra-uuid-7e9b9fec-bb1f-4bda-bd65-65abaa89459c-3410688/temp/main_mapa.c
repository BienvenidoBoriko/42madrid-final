/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mapa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:12:44 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/15 12:08:48 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "mapa.h"

int main()
{
	char file[]="example_file";
	char *mapa;
	char **arrmap;

	mapa = NULL;
	mapa = ft_read_file(file);
	//printf("%s",mapa);
	//printf("\nnumero de lineas: %d",ft_line_numbers(mapa));
	//printf("\n vacio : %c",ft_typecell(mapa, 2)); //n=(0=>vacio, 1=>obs,2 =>lleno)
	//ft_ch_mapcell(mapa);
	arrmap = ft_buffer(mapa);
	return (0);
}
