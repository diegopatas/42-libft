/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:37:21 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 16:30:54 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char *argv[])
{
	char	ch_1[50] = "Uma String Para Testar Meu Codigo";
	char	ch_2[50] = "Uma String Para Testar Meu Codigo";

	if (argc == 1)
		printf("----\n%s\n----\n", argv[0]);
	memset(ch_1 + 4, '_', 10);
	printf("Original:\n%s\n", ch_1);
	ft_memset(ch_2 + 4, '.', 10);
	printf("Copy:\n%s", ch_2);
	return (0);
}
