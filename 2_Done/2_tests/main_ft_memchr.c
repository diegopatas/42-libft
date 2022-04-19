/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:16:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/12 16:31:20 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t);

int	main(void)
{
	char	*str = "42 school";
	char	*ptr;
	char	*ptr_c;

	ptr = (char *)memchr(str, 's', 3);
	ptr_c = (char *)ft_memchr(str, 's', 3);
	printf("Original: %s\n", ptr);
	printf("Copy: %s\n", ptr_c);
	return (0);
}
