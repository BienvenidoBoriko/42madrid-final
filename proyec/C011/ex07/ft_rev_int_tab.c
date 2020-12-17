/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:42:46 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/30 18:15:30 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
    int auxiliar;
    int contador;
    int mitad;

    mitad = size/2;
    contador = 0;
    while (mitad > contador)
    {
        auxiliar = tab[contador];
        tab[contador] = tab[size - contador - 1];
        tab[size - contador - 1] = auxiliar;
        contador++;
    }
}

int main(void)
{
    int numero[] = {1, 4,5, 7 ,9,4,5, 7 ,9,22};
    // {5,0,2,6,4,1}
    int size;

    size = 10;
    printf("\nImprimiendo arreglo DESPUÉS de invertir\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", numero[i]);
    }
    ft_rev_int_tab(numero, size);

    printf("\nImprimiendo arreglo DESPUÉS de invertir\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", numero[i]);
    }
    return 0;
    //printf("%d", longitud);
}
