/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:12:48 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:12:53 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int factorial;

    if(nb < 0)
        return (0);
    else if (nb == 0)
        factorial = 1;
    else
    {
        factorial = 1;
        while(nb >= 1)
        {
            factorial *= nb;
            nb--;
        }
    }
    return (factorial);
}

int main(void)
{
    printf("%d", ft_iterative_factorial(3));
}


