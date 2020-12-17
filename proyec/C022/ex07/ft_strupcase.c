/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:28:08 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 17:28:11 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
    char *strcp;

    strcp = str;
    while (*str != '\0')
	{
        if(*str >= 97 && *str <= 122)
            *str = *str - 32;
        str++;
	}
    return strcp;
}

int     main(void)
{
    char cadena[]="holamuNdo&";
    char *valor;

    valor=ft_strupcase(cadena);
   
   while (*valor != '\0')
	{
         printf("%c", *valor);
         valor++;
	}
   
}
