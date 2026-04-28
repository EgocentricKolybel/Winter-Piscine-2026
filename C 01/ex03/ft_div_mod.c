/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:12:09 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:48:41 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	res_div;
	int	res_mod;
	int	n1;
	int	n2;

	n1 = 13;
	n2 = 5;

	ft_div_mod(n1, n2, &res_div, &res_mod);

	printf("Divisão de %d por %d:\n", n1, n2);
	printf("Resultado (div): %d\n", res_div);
	printf("Resto (mod): %d\n", res_mod);

	return (0);
}*/
