/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:39:13 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/17 18:39:17 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h" 
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
    write(1, "\n", 1);
}

void		ft_putnbr(int nb)
{
	char			caracter;
	unsigned int	nbl;

	nbl = nb;
	if (nb < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	if (nbl > 9)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	if (nbl <= 9 && nbl >= 0)
	{
		caracter = nbl + 48;
		write(1, &caracter, 1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
    int cont;

    cont = 0;
    while(par[cont].copy != '\0')
    {
        ft_putstr(par[cont].str);
        ft_putnbr(par[cont].size);
        write(1, "\n", 1);
        if(par[cont].copy != '\0')
            ft_putstr(par[cont].copy);
        cont++;
    }
}
