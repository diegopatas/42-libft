/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:57:08 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/12 16:33:01 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n) //TODO: see convertion about unsigned char
{
	while ((char *)s && (n > 0))
	{
		if (*(char *)s == c)
			return ((void *)s);
		s++;
		n--;
	}
	return (0);
}
