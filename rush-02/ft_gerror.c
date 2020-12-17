/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gerror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpillado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:22:51 by zpillado          #+#    #+#             */
/*   Updated: 2020/12/13 11:39:43 by zpillado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_puterror(void)
{
	write(1, "Error\n", 6);
}
int		ft_arg_error(char *str)
{
	int		n;
	long long unsigned int	res;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < '0' || str[n] > '9')
		{
			ft_puterror();
			return (0);
		}
		n++;
		if (n > 10)
		{
			ft_puterror();
			return (0);
		}
	}
	res = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	if (!(res <= 4294967295))
	{
		ft_puterror();
		return (-1);
	}
	return ((unsigned int) res);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_arg_error(argv[1]) == 0)
			return (0);
	}
	else if (argc == 3)
	{
		if (ft_arg_error(argv[2]) == 0)
			return (0);
	}
	else
	{
		ft_puterror();
		return (0);
	}
	write(1, "Sigue funcionando\n", 18);
}
