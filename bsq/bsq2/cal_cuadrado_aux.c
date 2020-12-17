/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_cuadrado_aux.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 22:26:45 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/15 17:37:25 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "mapa.h"

int		rell_nums(int lines, char **arr, char *caract, int **tab)
{
	int		cont1;
	int		cont2;
	int		line_len;

	cont1 = 0;
	line_len = ft_strlen(arr[0]);
	if (lines < 1)
		return (-1);
	while (cont1 < lines)
	{
		tab[cont1] = (int*)malloc((line_len + 1) * sizeof(int));
		cont2 = 0;
		while (cont2 < line_len)
		{
			if (arr[cont1][cont2] == caract[0])
				tab[cont1][cont2] = 1;
			else if (arr[cont1][cont2] == caract[1])
				tab[cont1][cont2] = 0;
			cont2++;
		}
		cont1++;
	}
	return (1);
}

int		**rell_cuad_aux(int lines, char *caract, char **arr)
{
	int		**tab;
	int		lin_len;

	lin_len = ft_strlen(arr[0]);
	tab = (int **)malloc(lines * sizeof(int**));
	rell_nums(lines, arr, caract, tab);
	return (tab);
}

int		m_de_t(int pr, int seg, int ter)
{
	if ((pr <= seg) && (pr <= ter))
		return (pr);
	else if ((seg <= ter) && (seg <= pr))
		return (seg);
	else
		return (ter);
}
