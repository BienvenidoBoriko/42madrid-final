/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:06:59 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/27 14:22:03 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = (int) a % b;
}

int		main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 21;
	b = 4;
	mod = 0;
	div = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d; b = %d; div = %d; mod = %d", a, b, div, mod);
}
