/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:41:37 by desantos          #+#    #+#             */
/*   Updated: 2026/02/03 14:20:24 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*

int	main(void)
{
	int	numero;
	char	dezena;
	char	unidade;

	numero = 0;
	ft_ft(&numero);

	dezena = (numero / 10) + '0';
	unidade = (numero % 10) + '0';

	write(1, &dezena, 1);
	write(1, &unidade, 1);
	write(1, "\n", 1);

	return (0);
}
*/
