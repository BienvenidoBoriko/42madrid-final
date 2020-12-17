/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inp_entrad_sts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:18:22 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/15 19:05:42 by ijaber-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "mapa.h"

char *inc_pr_linia()
{
    char *pr_linia;

    pr_linia = (char*)malloc(5 * sizeof(char));
    if(read(0, pr_linia, 4) < 0)
    {
        return (NULL);
    }
    pr_linia[4] = '\0';
    return (pr_linia); 
}

int verif_tabl(char **ln, char *pr_linia)
{
    char pr;
    char seg;
    int c1;
    int c2;

    pr = pr_linia[ft_strlen(pr_linia) - 3];
    seg = pr_linia[ft_strlen(pr_linia) - 2];
    c1 = 1;
    while(ln[c1] != '\0')
    {
        c2 = 0;
        while(ln[c1][c2] != '\0')
        {
            if(ln[c1][c2] != pr && ln[c1][c2] != seg && ln[c1][c2] != '\n')
                return (-1);
            c2++;
        }
        c1++;
    }
    return (1);
}

int reed_line(char **tab, int cont, int le_pr_lin)
{
    int n_byts;

    n_byts =(int) read(0, tab[cont], le_pr_lin);
    tab[cont][n_byts+ 1] = '\0';
    return (n_byts);
}

char **inc_pr_tabla(int n_linias, char *pr_linia, int le_pr_lin)
{
    char **tab;
    int cont;
    int n_byts;

    cont = 1;
    tab = (char**)malloc((n_linias + 2) * sizeof(char**));
    tab[0] = (char*)malloc((5) * sizeof(char));
    ft_strcpy(tab[0], pr_linia);
    while( cont <= n_linias + 1)
    {
        tab[cont] = (char*)malloc((le_pr_lin) * sizeof(char));
        if(reed_line(tab, cont, le_pr_lin) < 0)
            return (NULL);
        cont++;
    }
    tab[cont] = NULL;
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
    if(verif_tabl(tab, pr_linea) == -1)
    {
       return (NULL);
    }
    free(pr_linea);
    return (tab);
}
 
int main()
{
    char **tab;
    char data[128];
    int cont;
    int len;
 
  /* if(read(0, data, 128) < 0)
    {
        printf("%s", "An error occurred in the read.\n");
    }*/
      cont = 0;  
    tab = entr_standar();
   // printf("%s" ,tab[0]); 
    if(tab == NULL)
    {
        printf("error");
    }else
    {
       /*while(tab[cont])
    {
        printf("%s", tab[cont]);
        cont++;
    }*/
    }
    cont = 0;
    //len = ft_strlen(tab[0]);

   
       
     
    
    //printf("%s\n %s", data, "hola");
   // printf("\n%d\n", ft_atoi(data));
    
 
    exit(0);
}
