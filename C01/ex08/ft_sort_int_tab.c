/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:08:54 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/30 15:15:23 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		auxiliar;
	int		contador;
	int		ordenado;

	ordenado = 0;
	while (ordenado != 1)
	{
		contador = 0;
		ordenado = 1;
		while (size - 1 > contador)
		{
			if (tab[contador] > tab[contador + 1])
			{
				auxiliar = tab[contador + 1];
				tab[contador + 1] = tab[contador];
				tab[contador] = auxiliar;
				ordenado++;
			}
			contador++;
		}
	}
}
