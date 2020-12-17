/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboriko- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:13:10 by bboriko-          #+#    #+#             */
/*   Updated: 2020/12/10 20:34:28 by bboriko-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		factorial;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		factorial = 1;
	}
	else
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
