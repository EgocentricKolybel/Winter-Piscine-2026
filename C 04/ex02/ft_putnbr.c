/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:45:54 by desantos          #+#    #+#             */
/*   Updated: 2026/02/10 11:55:55 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');

	ft_putnbr(0);
	ft_putchar('\n');

	ft_putnbr(-123);
	ft_putchar('\n');

	ft_putnbr(2147483647);
	ft_putchar('\n');

	ft_putnbr(-2147483648);
	ft_putchar('\n');

	return (0);
}*/
