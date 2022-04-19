/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:11:14 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/11 16:45:31 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strlcat(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char s1[50] = "42";
	char *s2 = "school";
	char s3[50] = "42";
	char *s4 = "school";

	printf("Original: %s\n", strncat(s1, s2, 7));
	printf("Copy: %s", ft_strlcat(s3, s4, 7));
	return (0);
}

