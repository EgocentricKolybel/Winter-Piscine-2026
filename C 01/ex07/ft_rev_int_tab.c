/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:14:45 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:51:22 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	meu_array[] = {1, 2, 3, 4, 5};
	int	tamanho = 5;
	int	i;

	printf("Antes: ");
	for(i = 0; i < tamanho; i++) printf("%d ", meu_array[i]);

	ft_rev_int_tab(meu_array, tamanho);

	printf("\nDepois: ");
	for(i = 0; i < tamanho; i++) printf("%d ", meu_array[i]);
	printf("\n");

	return (0);
}*/
