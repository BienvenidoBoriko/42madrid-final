/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:25:36 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/27 14:38:52 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (int) *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int		main(void)
{
	int a;
	int b;
	
	a = 9;
	b = 2;
	printf("numero1 = %d; numero2 = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d; mod = %d", a, b);
}
