/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:37:21 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 15:43:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char *argv[])
{
	char	ch[50] = "Uma String Para Testar Meu Codigo";

	if (argc == 1)
		printf("----\n%s\n----\n", argv[0]);
	printf("Target string:\n%s\n", ch);
	memset(ch + 4, '_', 10);
	printf("Original replacement '_':\n %s\n", ch);
	ft_memset(ch + 4, '.', 10);
	printf("Copy replacement '_':\n %s\n", ch);
	printf("Result:\n %s\n", ch);
	return (0);
}
