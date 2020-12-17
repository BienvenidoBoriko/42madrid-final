/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:07:22 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/07 15:39:15 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

void	is_non_print(char *str)
{
	int		cont;
	char	s2;

	cont = 0;
	while (*str != '\0')
	{
		s2 = *(str - 1);
		if ((s2 >= 58 && s2 <= 64) || cont == 0 || (s2 >= 123 && s2 <= 126))
		{
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		else if ((s2 >= 32 && s2 <= 47) || (s2 >= 91 && s2 <= 96))
		{
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		else if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
		cont++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char *strcp;

	strcp = str;
	is_non_print(str);
	return (strcp);
}
