/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:16:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 15:05:48 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	str[50] = "42 school";
	char	str_1[50] = "42 school";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %s\n", (char *)memchr(str, 's', 4));
	printf("Copy: %s\n", (char *)ft_memchr(str_1, 's', 4));
	return (0);
}
