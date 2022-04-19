/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:16:36 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 23:07:04 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize);

int	main(int argc, char *argv[])
{
	char	*str;
	char	*str_c;
	int	n;

	n = 5;
	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	puts("Original:\n");
	str = (char *)calloc(n, sizeof(char));
	while (n > 0)
	{
		printf("char: %c\n", *str + '0');
		str++;
		n--;
	}
	n = 5;
	puts("Copy:\n");
	str_c = (char *)ft_calloc(n, sizeof(char));
	while (n > 0)
	{
		printf("char: %c\n", *str_c + '0');
		str_c++;
		n--;
	}
	return (0);
}
