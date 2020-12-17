/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:13:38 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 14:13:42 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    result = 1;
    if(nb == 0 && power == 0)
        return (1);
    if (power < 0)
        return (0);
    if( power > 0)
    {
        result = nb * ft_recursive_power(nb,power - 1);
    }
    return (result); 
}

int main(void)
{
    printf("%d", ft_recursive_power(3,2));
}