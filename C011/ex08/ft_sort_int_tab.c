/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:08:54 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 20:39:39 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
    int auxiliar;
    int contador;
    int ordenado;

    ordenado = 0;
    while (ordenado != 1)
    {
        contador = 0;
        ordenado = 1;
        while (size - 1 > contador)
        {
            if(tab[contador] > tab[contador + 1])
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

int main(void)
{
    int numero[] = {};
    // {5,0,2,6,4,1}
    int size;

    size = 0;
    printf("\nImprimiendo arreglo DESPUÉS de invertir\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", numero[i]);
    }
    ft_sort_int_tab(numero, size);

    printf("\nImprimiendo arreglo DESPUÉS de invertir\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", numero[i]);
    }
    return 0;
    //printf("%d", longitud);
}
