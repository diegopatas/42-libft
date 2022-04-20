/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:04:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 14:11:01 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char *argv[])
{
	char	*str1 = "laranjas macias";
	char	*str2 = "laranjas doces";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original diff: \n%d\n", memcmp(str1, str2, 10));
	printf("Copy diff: \n%d\n", ft_memcmp(str1, str2, 10));
	return (0);
}
