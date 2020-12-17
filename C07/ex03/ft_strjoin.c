/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:01:53 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 20:01:56 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		len;
    int cont;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char *c_s1;
    int cont;

	c_s1 = dest;
    cont = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c_s1);
}

int text_len(char **str)
{
    int len;
    int cont;

    len = 0;
    cont = 0;
    while(str[cont])
    { 
        len += ft_strlen(str[cont]);
        cont++;
    }
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *join;
    int t_len;
    int cont;
    int s_len;

    t_len = text_len(strs);
    s_len =  ft_strlen(sep);
    join = (char *)malloc(((t_len + s_len) * sizeof(char *)) + 1);
    cont = 0;
    while(cont < size)
    {
        ft_strcat(join, strs[cont]);
        cont++;
        if(cont < size)
            ft_strcat(join, sep);
    }
    return (join);
}

int main(void)
{   
    int i;
    int j;
    char **president = (char **)malloc(25);
    i = 0;
     while (++i < 6)
        president[i] = (char *)malloc(6 * sizeof(int));
        president[i] = (char *)malloc(6 * sizeof(int));
    
  
        j = 0;
        while (j < 6)
        {
            president[j] = "obama";
            j++;
        }
     
    
    //ft_strcat(president,"hola");
   // *stringg = "hola";
    printf("%s",ft_strjoin(5, president, " | "));
}
