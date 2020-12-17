/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:06 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/11 14:08:37 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		raiz;
	int		cont;

	raiz = 0;
	cont = 0;
	while (cont < 48000)
	{
		if (cont * cont == nb)
			return (cont);
		cont++;
	}
	return (raiz);
}