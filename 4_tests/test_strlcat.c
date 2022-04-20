/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:11:14 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 20:34:12 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "../../2_Done/libft.h"
#include <bsd/string.h>

int	main(int argc, char *argv[])
{
	char s1[50] = "42";
	char *s2 = "school";
	char s3[50] = "42";
	char *s4 = "school";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Initial String:\n\t%s\n", s1);
	printf("Length:\n%ld\n", strlcat(s1, s2, 0));
	printf("Original result:\n\t%s\n", s1);
	printf("Initial String:\n\t%s\n", s3);
	printf("Length:\n%ld\n", ft_strlcat(s3, s4, 0));
	printf("Copy result:\n\t%s\n", s3);
	return (0);
}

