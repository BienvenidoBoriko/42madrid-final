/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_entrad_sts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:18:22 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/15 10:19:26 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "mapa.h"

char *inc_pr_linia()
{
    char *pr_linia;

    pr_linia = (char*)malloc(4 * sizeof(char));
    if(read(0, pr_linia, 4) < 0)
    {
        return (NULL);
    }
    return (pr_linia); 
}

int ver_linia(char **ln, char *pr_linia)
{
    char pr;
    char seg;
    int cont;
    int cont2;

    pr = ft_typecell(pr_linia, 0);
    seg = ft_typecell(pr_linia, 1);
    cont = 0;
    cont2 = 0;
    while(ln[cont] != '\0')
    {
        while(ln[cont][cont2] != '\0')
        {
            if(ln[cont][cont2] != pr && ln[cont][cont2] != seg)
                return (-1);
            cont2++;
        }
        cont++;
    }
    return (1);
}

char **inc_pr_tabla(int n_linias, char *pr_linia, int le_pr_lin)
{
    char **tab;
    int cont;

    cont = 1;
    tab = (char**)malloc((n_linias + 1) * sizeof(char**));
    tab[0] = (char*)malloc((le_pr_lin) * sizeof(char));
    ft_strcpy(tab[0], pr_linia);
    while( cont <= n_linias +1)
    {
        tab[cont] = (char*)malloc((le_pr_lin) * sizeof(char));
        if(read(0, tab[cont], le_pr_lin) < 0)
        {
            return (NULL);
        }
        cont++;
    }
    return (tab);
}

char **entr_standar()
{
    char **tab;
    char *pr_linea;
    int n_lineas;
    int le_pr_lin;
    int cont;

    le_pr_lin = 100;
    cont = 0; 
    pr_linea = inc_pr_linia();
    n_lineas = ft_atoi(pr_linea);
    if(n_lineas > 0)
        tab = inc_pr_tabla(n_lineas, pr_linea, le_pr_lin);
        while(tab[cont])
    {
        printf("%s", tab[cont]);
        cont++;
    }
    if(ver_linia(tab, pr_linea) == -1)
        return (NULL);
    free(pr_linea);
    return (tab);
}
 
int main()
{
    char **tab;
    char data[128];
    int cont;
 
   /* if(read(0, data, 128) < 0)
    {
        printf("%s", "An error occurred in the read.\n");
    }*/
      cont = 0;  
    tab = entr_standar();
    if(tab == NULL)
    {
        printf("error");
    }else
    {
       while(tab[cont])
    {
        printf("%s", tab[cont]);
        cont++;
    }
    }
    
    
    //printf("%s\n %s", data, "hola");
   /* printf("\n%d\n", ft_atoi(data));*/
    
 
    exit(0);
}
