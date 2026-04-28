/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:28:32 by desantos          #+#    #+#             */
/*   Updated: 2026/02/11 13:34:00 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	printf("5^0 = %d\n", ft_iterative_power(5, 0));
	printf("2^-2 = %d\n", ft_iterative_power(2, -2));
	return (0);
}*/
