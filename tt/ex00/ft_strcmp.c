/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:14:02 by mtorrado          #+#    #+#             */
/*   Updated: 2020/12/16 20:24:24 by mtorrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int valor;

	i = 0;
	valor = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		valor = valor + 0;
	else if (s1[i] > s2[i])
		valor = s1[i] - s2[i];
	if (s1[i] < s2[i])
		valor = s1[i] - s2[i];
	return (valor);
}
