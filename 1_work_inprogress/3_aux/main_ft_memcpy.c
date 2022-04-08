/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:23:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 18:42:52 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n);

int	main(void)
{
	char	s1[] = "Geeks";
	char	s2[] = "Quiz";
	char	s3[] = "Geeks";
	char	s4[] = "Quiz";

	printf("Original bef:\n\t%s\n", s1);
	memcpy(s1, s2, sizeof(s2));
	printf("Original aft:\n\t%s\n", s1);
	printf("Source:\n\t%s\n", s2);

	printf("Copy bef:\n\t%s\n", s3);
	ft_memcpy(s3, s4, sizeof(s4));
	printf("Copy aft:\n\t%s", s4);
	return (0);
}
