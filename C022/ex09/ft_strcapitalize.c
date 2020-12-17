/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:07:22 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/02 18:07:25 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			if (!(str[c - 1] >= 'A' && str[c - 1] <= 'Z'))
				if (!(str[c - 1] >= 'a' && str[c - 1] <= 'z'))
					if (!(str[c - 1] >= '0' && str[c - 1] <= '9'))
						str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}


int     main(void)
{
    char cadena[]="salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *valor;

    valor=ft_strcapitalize(cadena);
   
   while (*valor != '\0')
	{
         printf("%c", *valor);
         valor++;
	}
   
}
