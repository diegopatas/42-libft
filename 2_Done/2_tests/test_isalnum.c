/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:42:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 12:25:55 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	char	ch;

	ch = 'a';
	puts("---Teste---\n");
	printf("Original: %d\n", isalnum(ch));
	printf("Copy: %d\n\n", isalnum(ch));

	ch = 'a' - 48;
	puts("---Teste---\n");
	printf("Original: %d\n", isalnum(ch));
	printf("Copy: %d\n\n", isalnum(ch));
	return (0);
}
