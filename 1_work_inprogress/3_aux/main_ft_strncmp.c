/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:38:40 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/11 10:47:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char *str1 = "Teste";
	char *str2 = "Teia";
	
	printf("Original: \n%d\n", strncmp(str1, str2, 3));
	printf("Copy: \n%d\n", ft_strncmp(str1, str2, 3));
	return (0);
}
