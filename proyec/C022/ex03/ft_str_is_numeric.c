/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:51:28 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/05 17:28:53 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    int is_numeric;
    int len;

    len = 0;
    is_numeric = 0;
    while (*str != '\0')
	{
       if(*str >= '0' && *str <= '9')
       {
           is_numeric ++;
       }
       str++;
       len++;
	}
    if(len == 0 || len == is_numeric)
        return (1);
    else
        return (0);
}

int     main(void)
{
    char cadena[]="12423335";
    int valor;

    valor=ft_str_is_numeric(cadena);
   
    printf("%d", valor);
}

