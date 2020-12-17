/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:01:40 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 17:01:42 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
    int is_uppercase;
    int len;

    len = 0;
    is_uppercase = 0;
    while (*str != '\0')
	{
      if(*str >= 'A' && *str <= 'Z')
       {
           is_uppercase ++;
       }
       str++;
       len++;
	}
    if(len == 0 || len == is_uppercase)
        return (1);
    else
        return (0);
}

int     main(void)
{
    char cadena[]="HOLASD";
    int valor;

    valor=ft_str_is_uppercase(cadena);
   
    printf("%d", valor);
}
