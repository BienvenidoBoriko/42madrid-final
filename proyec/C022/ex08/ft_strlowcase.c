/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:04:16 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 18:04:19 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
    char *strcp;

    strcp = str;
    while (*str != '\0')
	{
        if(*str >= 65 && *str <= 90)
            *str = *str + 32;
        str++;
	}
    return strcp;
}

int     main(void)
{
    char cadena[]="HolamUNdO&";
    char *valor;

    valor=ft_strlowcase(cadena);
   
   while (*valor != '\0')
	{
         printf("%c", *valor);
         valor++;
	}
   
}
