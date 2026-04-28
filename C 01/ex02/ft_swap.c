/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 09:41:41 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:47:24 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	n1;
	int	n2;
	char	c1;
	char	c2;

	n1 = 1;
	n2 = 8;
	
	ft_swap(&n1, &n2); 

	c1 = n1 + '0';
	c2 = n2 + '0';

	write(1, "n1: ", 4);
	write(1, &c1, 1);
	write(1, "\n", 1);
	write(1, "n2: ", 4);
	write(1, &c2, 1);
	write(1, "\n", 1);

	return (0);
}*/
