/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 14:33:46 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/13 14:33:50 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ft_dict.c"
#include "traduction_12_12.c"

int num_lines(int max, char *arr_fil)
{
    int line;
   
   line = 0;
    while (*arr_fil)
    {
        if(*arr_fil == '\n')
        {
            line++;
        }
        arr_fil++;
    }
    return (line);
}

trad *get_traduction(char *file)
{
    char *str_file;
    trad *traductions;

    str_file = ft_dict(file);
    if(str_file != NULL)
    {
        traductions = ft_translate(str_file);
        return (traductions);
    }
    else
        return (NULL);
}

int main(void)
{
    trad *traduc;

    traduc = get_traduction("numbers.dict.txt");
   // ft_printtranslate(traduc, 5);

}