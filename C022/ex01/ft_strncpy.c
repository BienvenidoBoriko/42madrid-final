/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:36:26 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/05 17:45:07 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *ref;

    ref = dest;
    while (*src != '\0' && n > 0)
	{
        *dest = *src;
        dest++;
		src++;
        n--;
	}
   while (*dest != '\0')
    {
      *dest= '\0';
     dest++;
    }
    return ref;
}

int     main(void)
{
    char src[]="hola mundo";
    char dest[15];
    char *dest2;

    dest2 = ft_strncpy(dest,src,9);
   
      while (*dest2 != '\0')
    {
        printf("%c", *dest2);
        dest2++;
    }
    
}
