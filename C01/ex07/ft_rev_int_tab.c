/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:42:46 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/30 15:09:41 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		auxiliar;
	int		contador;
	int		mitad;

	mitad = size / 2;
	contador = 0;
	while (mitad > contador)
	{
		auxiliar = tab[contador];
		tab[contador] = tab[size - contador - 1];
		tab[size - contador - 1] = auxiliar;
		contador++;
	}
}
