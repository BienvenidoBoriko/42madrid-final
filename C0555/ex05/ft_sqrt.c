/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:06 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:14:09 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int raiz;
    int cont;

    raiz = 0;
    cont = 0;
    while(raiz == 0 && cont < nb)
    {
        if(cont * cont == nb)
            raiz = cont;
        cont++;
    }
    return (raiz);
}

int main(void)
{
    printf("%d\n", ft_sqrt(144));
}