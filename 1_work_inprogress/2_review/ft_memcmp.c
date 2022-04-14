/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:54:51 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/12 17:25:02 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((*(char *)s1 == *(char *)s2) && (n -1 > 0))
	{
		s1++;
		s2++;
		n--;
	}
	return (*(char *)s1 - *(char *)s2);
}
