/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:43 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:14:46 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		b_cel_vacia(int **tablero, int *cell)
{
	int		cont1;
	int		cont2;
	
	cont1 = 1;
	while (cont1 <= 4)
	{
		cont2 = 1;
		while (cont2 <= 4)
		{
			if (tablero[cont1][cont2] == 0)
			{
				cell[0] = cont1;
				cell[1] = cont2;
				return (0);
			}
			cont2++;
		}
		cont1++;
	}
	return (0);
}

int ft_ten_queens_puzzle(void)
{

}
