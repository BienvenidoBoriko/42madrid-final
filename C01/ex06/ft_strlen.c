/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:29:36 by bboriko-          #+#    #+#             */
/*   Updated: 2020/11/30 15:04:53 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		longitud;

	longitud = 0;
	while (*str != '\0')
	{
		longitud++;
		str++;
	}
	return (longitud);
}
