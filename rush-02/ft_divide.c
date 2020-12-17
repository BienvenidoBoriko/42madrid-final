/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:04:49 by cmarcu            #+#    #+#             */
/*   Updated: 2020/12/13 10:17:39 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char *str, int start)
{
	int i;
  	char substring[4];
  
  	i = 0;
  	while (i < 3)
    {
    	substring[i] = str[start];
      	i++;
      	start++;
    }
  	substring[3] = '\0';
  	return (substring);
}

char *ft_mount_array(int strlength, char *str)
{
	int i;
  	char **tab;
  	int arraylength;
  	int counter;
  
  	i = 0;
  	arraylength = strlength / 3;
  	if (strlength % 3 != 0)
      arraylength = arraylength + 1;
  	tab = malloc(sizeof(char *) * arraylength);
  	while (i < arraylength)
    {
    	tab[i] = malloc(sizeof(char *) * 3);
      	i++;
    } 
  	i = arraylength - 1;
  
  	char array[arraylength];
    counter = strlength - 3;
  	while (i >= 0)
    {
	    array[i] = ft_substr(str, counter);
      	i--;
      	counter = counter - 3;
    }
  	return (array);
}

int main()
{
	char *mystring = "0123456789";
	int stringlength = 10;
	char *result = ft_mount_array(stringlength, mystring);

	for (unsigned long i=0; i<sizeof(result); i++)
	{
		printf("%s\n", result[i]);
	}
}
