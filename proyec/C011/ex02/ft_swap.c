/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:53:10 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/27 14:05:16 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int		main(void)
{
	int num1;
	int num2;

	num1 = 9;
	num2 = 4;
	printf("numeros originales = %d; %d", num1, num2); 
	ft_swap(&num1, &num2);
	printf("numero1 = %d; numero2 = %d ", num1, num2);
}
