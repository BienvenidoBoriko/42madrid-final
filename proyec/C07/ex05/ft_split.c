/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 20:02:37 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 20:02:40 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int		string_len(char *str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

void	cambiar(char *to_find, char *ref, int *igual)
{
	to_find = ref;
	igual = 0;
}

int ft_strstr(char *str, char *to_find, int *cont)
{
	char	*ref;
	int		igual;
	int		len;

	ref = to_find;
	igual = 0;
	len = string_len(to_find);
	if (len == 0)
		return (0);
	printf("%d", *cont);
	while (str[*cont] != '\0')
	{
		if (str[*cont] == *to_find)
		{
			/*igual++;
			if (len == igual)
				return (*cont + len);
			to_find++;*/
		}
		else
			cambiar(to_find, ref, &igual);
		cont++;
	}
	return (0);
}

int	num_lines(char *str, char *sp)
{
	int		len;
	int cont;

	len = 0;
	cont = 0;
	//while (ft_strstr(str, sp, &cont) != 0)
		len++;
	return (len);
}

char **ft_split(char *str, char *charset)
{
    char **c_dev;
	int post1;
	int post2;
	int len;
	int cont;

	post1 = 0;
	cont = 0;
	len = num_lines(str, charset);
	c_dev = (char **)malloc(len * sizeof(char **));
	/*while(cont < len)
	{
		ft_strstr(str, charset, &post2);
		c_dev[cont] = (char *)malloc(((post2 - post1) + 1) * sizeof(char *));
		while (post1 <= post2)
		{
			//c_dev[cont][post2 - post1] = str[post1];
			post1++;
		}
		post1 = post2;
		cont++;
	}*/
	return (c_dev);
}

int main(void)
{
    char dest[80] = "primero hol ho hgola holll";
    char primero[] = "gola";
    char **ref;

   	ref = ft_split(dest, " ");
    //printf("%s", strstr(dest, primero));
    //printf("%d", ft_strstr(dest, " "));
   // printf("%s", ref[0]);
    //printf("\n");
    //printf("%s", ft_strstr(dest, tercero));
}
