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
int ft_strstr(char *str, char *to_find, int cont);

int		_len(char *str, char *sp, int op)
{
	int		len;
	int cont;
	int parar;
	int cont2;

	len = 0;
	if(op == 0)
	{
		while (*str != '\0')
		{
			len++;
			str++;
		}
		return (len);
	}
	else
	{
		cont = 0;
		cont2 = 0;
		parar = 0;
		while((cont = ft_strstr(str, sp, cont)) != 0)
		{
			cont++;
			len++;
		}
		return (len);
	}	
}

void	cambiar(char *to_find, char *ref, int *igual)
{
	to_find = ref;
	igual = 0;
}

int ft_strstr(char *str, char *to_find, int cont)
{
	char	*ref;
	int		igual;
	int		len;

	ref = to_find;
	igual = 0;
	len = _len(to_find," ", 0);
	if (len == 0)
		return (0);
	while (str[cont] != '\0')
	{
		if (str[cont] == *to_find)
		{
			igual++;
			if (len == igual)
				return (cont);
			to_find++;
		}
		else
			cambiar(to_find, ref, &igual);
		cont++;
	}
	return (0);
}

void rellenar(char **c_dev, char *str, char *charset, int len)
{
	int post1;
	int post2;
	int cont;
	int cont2;

	post1 = 0;
	post2 = 0;
	cont = 0;
	cont2 = 0;
	while(cont < len)
	{
		post2 = ft_strstr(str, charset, post2);
		c_dev[cont] = (char *)malloc(((post2 - post1) + 1) * sizeof(char));
		cont2 = 0;
		while (post1 < post2)
		{
			c_dev[cont][cont2] = str[post1];
			post1++;
			cont2++;
		}
		post2++;
		c_dev[cont][cont2] = '\0';
		post1 = post2;
		cont++;
	}
}
char **ft_split(char *str, char *charset)
{
    char **c_dev;
	int len;

	len = _len(str, charset, 1);
	c_dev = (char **)malloc(len * sizeof(char **));
	rellenar(c_dev, str, charset , len);
	return (c_dev);
}

int main(void)
{
    char dest[80] = "primero|hol|ho|hgola|holll";
    char primero[] = "|";
    char **ref;
	int cont;

	cont = 0;
   	ref = ft_split(dest, primero);
    while(ref[cont])
	{
		printf("%s\n", ref[cont]);
		cont++;
	}
		
	//printf("%s", strstr(dest, primero));
    //printf("%d", ft_strstr(dest, " "));
   	printf("%s", ref[0]);
    //printf("\n");
    //printf("%s", ft_strstr(dest, tercero));
}
