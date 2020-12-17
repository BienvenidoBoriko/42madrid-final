/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:05:21 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/08 13:21:41 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int es_c_especial(char c)
{
	char caract[7] = "\t\n\v\f\r +";
	int cont;
	int es_espe;

	cont = 0;
	es_espe = 0;
	while(cont < 7)
	{
		if(c == caract[cont])
			es_espe++;
		cont++;
	}
	return (es_espe);
}

int		*e_signo(char *str, int *nums)
{
	int		signo;
	int		cont;

	signo = 1;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '-')
			signo = signo * -1;
		else if (!es_c_especial(str[cont]))
			break ;
		cont++;
	}
	*nums = cont;
	nums++;
	*nums = signo;
	return (nums);
}

int		ft_atoi(char *str)
{
	int		entero;
	char	s;
	int		cont;
	int		nums[2];

	entero = 0;
	e_signo(str, nums);
	cont = nums[0];
	while (str[cont] != '\0')
	{
		s = *str;
		if (str[cont] >= 48 && str[cont] <= 57)
			entero = entero * 10 + (str[cont] - '0');
		else
			return (entero * nums[1]);
		str++;
	}
	return (entero * nums[1]);
}
