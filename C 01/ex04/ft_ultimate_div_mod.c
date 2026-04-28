/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:41:55 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:49:19 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	if (*b != 0)
	{
		temp_div = *a / *b;
		temp_mod = *a % *b;
		*a = temp_div;
		*b = temp_mod;
	}
}
/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 23;
	n2 = 5;

	printf("Antes da função:  n1 = %d, n2 = %d\n", n1, n2);

	ft_ultimate_div_mod(&n1, &n2);

	printf("Depois da função: n1 = %d (div), n2 = %d (mod)\n", n1, n2);

	return (0);
}*/
