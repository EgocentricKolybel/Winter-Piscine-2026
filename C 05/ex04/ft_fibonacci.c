/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:47:17 by desantos          #+#    #+#             */
/*   Updated: 2026/02/11 17:49:27 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d (Esperado: 0)\n", ft_fibonacci(0));
	printf("%d (Esperado: 1)\n", ft_fibonacci(1));
	printf("%d (Esperado: 8)\n", ft_fibonacci(6));
	printf("%d (Esperado: -1)\n", ft_fibonacci(-5));
	return (0);
}*/
