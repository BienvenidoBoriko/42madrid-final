/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:57:39 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/01 13:57:42 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

char    *ft_strcpy(char *dest, char *src)
{
    char *ref;

    ref = dest;
    while (*src != '\0')
	{
        *dest = *src;
        dest++;
		src++;
	}
   *dest= '\0';

    return ref;
}

int     main(void)
{
    char src[]="hola mundo";
    char dest[15];
    char *dest2;

    dest2 = ft_strcpy(dest,src);
   
      while (*dest2 != '\0')
    {
        printf("%c", *dest2);
        dest2++;
    }
    
}