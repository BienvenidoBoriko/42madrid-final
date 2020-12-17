/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_entrad_sts_aux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:22:47 by ijaber-a          #+#    #+#             */
/*   Updated: 2020/12/16 21:23:19 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "mapa.h"

int		inptut_len(char **input)
{
	int		len;

	len = 0;
	while (*input != '\0')
	{
		len += ft_strlen(*input);
		input++;
	}
	return (len);
}

char	*input_stdio(void)
{
	char *input;
	char **input2;

	input2 = entr_standar();
	if (input2 == NULL)
		return (NULL);
	input = (char*)malloc(inptut_len(input2) * sizeof(char));
	while (*input2 != '\0')
	{
		ft_strcat(input, *input2);
		input2++;
	}
	return (input);
}
