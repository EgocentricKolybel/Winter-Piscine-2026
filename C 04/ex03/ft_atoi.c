/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:22:31 by desantos          #+#    #+#             */
/*   Updated: 2026/02/10 15:48:02 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	prd;
	int	nb;

	prd = 0;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			prd++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		++str;
	}
	if (prd % 2 != 0)
		return (-nb);
	return (nb);
}
/*
int	main()
{
	char	*s = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
}*/
