/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:47:19 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 12:16:56 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	char	c;

	c = ' ';
	puts("---Teste---\n");
	printf("Original: %c\n", isalpha(c));
	printf("Copy: %c\n", ft_isalpha(c));
	c = 'a';
	puts("---Teste---\n");
	printf("Original: %c\n", isalpha(c));
	printf("Copy: %c\n", ft_isalpha(c));
	return (0);
}
