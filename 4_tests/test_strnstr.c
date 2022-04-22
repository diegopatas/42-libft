/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:14:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 12:05:41 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *dst, const char *src, size_t n);

int	main(int argc, char *argv[])
{
	char	str_1[50] = "42 school";
	char	str_2[8] = "school";
	char	str_3[50] = "42 school";
	char	str_4[8] = "school";
	int		n = 8;

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %s\n", str_1);
	printf("Found: %s\n\n", strnstr(str_1, str_2, n));
	printf("Copy: %s\n", str_3);
	printf("Found: %s\n", ft_strnstr(str_3, str_4, n));
	return (0);
}
