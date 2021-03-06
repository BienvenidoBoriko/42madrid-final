/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:14:18 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:14:21 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
    int cont1;
    int cont2;
    int primo;

    primo = 0;
    if(nb < 2)
        return (0);
    else
    {
        cont1 = 1;
       while(cont1 <= nb)
       {
           if(nb % cont1 == 0){
                primo++;
            }
           cont1++;
       }
       if(primo == 2)
           return (1);   
        else
            return (0);
        
    }
    
}

int main(void)
{
    printf("%d", ft_is_prime(3));
}
