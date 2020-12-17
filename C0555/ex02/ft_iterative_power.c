/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:13:25 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:13:29 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if(nb == 0 && power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else
    {
        while(power > 0)
        {
            result *= nb;
            power--;
        }
    }
    return (result); 
}

int main(void)
{
    printf("%d", ft_iterative_power(2,3));
}
