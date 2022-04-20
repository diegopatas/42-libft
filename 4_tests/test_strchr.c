/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:14:37 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 18:28:39 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	char	*str = "a";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Target: %s\n", str);
	printf("Original: %s\n", strchr(str, 97));
	printf("Copy: %s\n", ft_strchr(str, ' '));
	return (0);
}
