/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:40:55 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/29 18:06:36 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1,&(*str), 1);
		str++;
	}
}

int		main(void)
{
	char cadena[] = "hola mundo";
	ft_putstr(&cadena[0]);
}
