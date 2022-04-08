/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:37:21 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 19:11:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	ch[50] = "Uma String Para Testar Meu Codigo";

	memset(ch + 4, '_', 10);
	printf("Result:\n %s\n", ch);
	memset(ch + 4, '.', 10);
	printf("Result:\n %s\n", ch);
	return (0);
}
