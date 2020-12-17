/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:30:07 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 14:09:29 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int num1, int num2, int num3);

void	imprimir(int num1, int num2, int num3)
{
	char	char_num1;
	char	char_num2;
	char	char_num3;

	char_num2 = num2 + '0';
	char_num1 = num1 + '0';
	char_num3 = num3 + '0';
	if (!(num1 == num2 && num2 == num3) && num2 > num1 && num3 > num2)
	{
		write(1, &char_num1, 1);
		write(1, &char_num2, 1);
		write(1, &char_num3, 1);
		if(num1 != 7)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int		num1;
	int		num2;
	int		num3;

	num3 = 0;
	num1 = 0;
	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				imprimir(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

int		main(void)
{
	ft_print_comb();
}
