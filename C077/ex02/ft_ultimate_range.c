/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:01:35 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/17 18:24:09 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*arreglo;
	int		rango;
	int		cont;

	rango = max - min;
	if (min >= max)
		return (NULL);
	arreglo = (int *)malloc(rango * sizeof(int));
	cont = 0;
	while (cont < rango)
	{
		arreglo[cont] = min;
		min++;
		cont++;
	}
	return (arreglo);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int		rango;
	int		cont;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	rango = max - min;
	range = (int **)malloc(rango * sizeof(min));
	if (range == NULL)
		return (-2);
	cont = 0;
	while (cont < rango)
	{
		range[cont] = ft_range(min, max);
		if (range[cont] == NULL)
		{
			return (-4);
		}
		cont++;
	}
	return (rango);
}

int main(void)
{
	int **arra= NULL;
    //int cont;
    //int cont2;

   printf("%d", ft_ultimate_range(arra, 4, 8));
   
  
	//printf("%d", arra[0][0]);
       
}