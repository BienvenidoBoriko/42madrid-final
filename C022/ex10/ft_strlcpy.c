/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:20:44 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/05 13:27:04 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    char *ref_dest;
    char *ref_src;
    int n;

    n = 0;
    ref_dest = dest;
    while (*src != '\0')
    {
        if(size > 1)
        {
            *dest = *src;
            dest++; 
            size--;
        }  
        src++;
        n++;
    }
    *dest = '\0';
    dest = ref_dest;
    return (n);
}

int main(void)
{
    char src[] = "hola mundo";
    char dest[20];
    char *dest2;
    int numero;
    int n;

    n = 0;
    numero = ft_strlcpy(dest, src, 17);

    printf("%s", dest);

    printf("%d", numero);
    numero = ft_strlcpy(dest, "", 4);

    printf("%s", dest);

    printf("%d", numero);
}
