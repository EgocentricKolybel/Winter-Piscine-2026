/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:27:18 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:51:51 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	changed;

	changed = 1;
	while (changed)
	{
		changed = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				changed = 1;
			}
			i++;
		}
	}
}
/*
int main(void)
{
    int arr[] = {8, 2, 5, 4, 6};
    int i = 0;

    ft_sort_int_tab(arr, 5);
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return (0);
}*/
