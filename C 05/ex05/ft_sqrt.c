/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:51:09 by desantos          #+#    #+#             */
/*   Updated: 2026/02/11 17:55:25 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i <= 46340 && i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d (Esperado: 5)\n", ft_sqrt(25));
	printf("%d (Esperado: 0)\n", ft_sqrt(2));
	printf("%d (Esperado: 1)\n", ft_sqrt(1));
	return (0);
}*/
