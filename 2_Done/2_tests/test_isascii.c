/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:42:24 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 12:48:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../1_modules/libft.h"

int	main(void)
{
	char	ch;
	int		d;

	ch = 'a';
	d = 127;
	puts("---\nISASCII\n---\n" "---Teste---\n");
	printf("Original: %d\n", isascii(ch));
	printf("Copy: %d\n\n", ft_isascii(ch));
	puts("---Test---\n");
	printf("Original: %d\n", isascii(d));
	printf("Copy: %d\n", ft_isascii(d));
	return (0);
}
