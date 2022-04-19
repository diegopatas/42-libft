/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:48:03 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 15:06:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t ft_strlen(const char *s);

int	main(int argc, char *argv[])
{
	char	*str_1 = "teste";
	char	str_2[10] = {};

	if (argc == 1)
		printf("---\n%s\n----\n", argv[0]);
	printf("Original: %ld\n", strlen(str_1));
	printf("Copy: %ld\n\n", ft_strlen(str_1));
	printf("Original: %ld\n", strlen(str_2));
	printf("Copy: %ld\n", ft_strlen(str_2));
	return (0);
}
