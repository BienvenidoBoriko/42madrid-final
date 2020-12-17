#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*ref;

	ref = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ref);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int cont;
    int len;
    t_stock_str *stru;

    cont = 0;
    if(ac > 0 )
    {
        stru =(t_stock_str*) malloc((ac + 1) * sizeof(t_stock_str));
        while(cont < ac)
        {
            len = ft_strlen(av[cont]);
            stru[cont].size = len;
            stru[cont].str = (char*) malloc((len + 1) * sizeof(char*));
            stru[cont].copy = (char*) malloc((len + 1) * sizeof(char*));
            ft_strcpy(stru[cont].str, av[cont]);
            ft_strcpy(stru[cont].copy, av[cont]);
            cont++; 
        }
        stru[cont].str = (char*) malloc((len + 1) * sizeof(char*));
        ft_strcpy(stru[cont].str, av[cont]);
        return (stru);
    }
    else
        return (NULL);
    
    
}

int main(void)
{
    t_stock_str *stru;
    int cont;

    cont = 0;
    char **sourc = (char**)malloc(4 * sizeof(char**));
    sourc[0] = (char*)malloc(10 * sizeof(char*));
    ft_strcpy(sourc[0], "hola mundo");
    sourc[1] = (char*)malloc(10 * sizeof(char*));
    ft_strcpy(sourc[1], "hola mundo");
    sourc[2] = (char*)malloc(10 * sizeof(char*));
    ft_strcpy(sourc[2], "hola mundo");
    sourc[3] = (char*)malloc(10 * sizeof(char*));
    ft_strcpy(sourc[3], "hola mundo");
   // printf("%s", sourc[0]);
    stru = ft_strs_to_tab(4, sourc);
    while(cont < 4)
    {
        printf("%s", stru[cont].str);
        printf("%s", stru[cont].copy);
        printf("%d\n", stru[cont].size);
        cont++;
    }
}