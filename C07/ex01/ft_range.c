/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:00:35 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 20:00:39 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *arreglo;
    int rango;
    int cont;

    rango = max - min;
    if(min >= max)
        return (arreglo = NULL);
    arreglo = (int *)malloc(rango * sizeof(int *));
    cont = 0;
    while(cont < rango)
    {
        arreglo[cont] = min;
        min++;
        cont++;
    }
    return (arreglo);
}

int main(void)
{
    int *arra;
    int cont;

    arra = ft_range(4, 8);
    cont = 0;
   while (cont < 4)
	{
		printf("%d", arra[cont]);
        cont++;
	}
}