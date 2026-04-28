/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:03:59 by desantos          #+#    #+#             */
/*   Updated: 2026/02/02 19:50:51 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*texto;
	int		tamanho;

	texto = "Norminette maldita!";
	tamanho = ft_strlen(texto);

	printf("A string: \"%s\"\n", texto);
	printf("Tem o tamanho: %d caracteres\n", tamanho);

	return (0);
}*/
