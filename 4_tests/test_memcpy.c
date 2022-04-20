/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:23:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 14:35:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n);

int	main(int argc, char *argv[])
{
	char	s1[] = "Geeks";
	char	s2[10] = "";
	char	s3[] = "42";
	char	s4[10] = "";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original bef:\n\t%s\n", s1);
	printf("Original aft:\n\t%s\n", (char *)memcpy(s1, s2, 20));
	printf("Source:\n\t%s\n", s2);

	printf("Copy bef:\n\t%s\n", s3);
	printf("Copy aft:\n\t%s\n", (char *)ft_memcpy(s3, s4, 20));
	printf("Source:\n\t%s\n", s4);
	return (0);
}
