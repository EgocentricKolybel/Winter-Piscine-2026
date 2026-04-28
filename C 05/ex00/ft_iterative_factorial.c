/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:03:43 by desantos          #+#    #+#             */
/*   Updated: 2026/02/11 13:13:38 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

//#include <stdio.h>
/*
int	main(void)
{
	printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
	printf("Fatorial de 0: %d\n", ft_iterative_factorial(0));
	printf("Fatorial de -5: %d\n", ft_iterative_factorial(-5));
	return (0);
}*/
