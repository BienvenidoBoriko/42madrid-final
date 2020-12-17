/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:29:36 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 18:29:40 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
    int     longitud;

    longitud = 0;
    while (*str != '\0')
    {
        longitud++;
        str++;
    }
    return longitud;
}

int     main(void)
{
    char    cadena[] = "hola mundo";
    int     longitud;

    longitud = ft_strlen(cadena);
    printf("%d", longitud);
}