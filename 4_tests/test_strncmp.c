/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:38:40 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 10:24:07 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char *argv[])
{
	char *str1 = "Test";
	char *str2 = "Teia";
	int	n;
	
	n = 1;
	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: \n%d\n", strncmp(str1, str2, n));
	printf("Copy: \n%d\n", ft_strncmp(str1, str2, n));
	return (0);
}
