/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desantos <desantos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:28:16 by desantos          #+#    #+#             */
/*   Updated: 2026/02/05 10:50:04 by desantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{	
	char s1[] = "Moulinette é um *****!";
	char s2[] = "Norminette é uma *****!";
	
	printf("A original: %d\n", strcmp(s1, s2));
	printf("A minha: %d\n", ft_strcmp(s1, s2));
}*/
