/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:28:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 16:43:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*save_s1;

	save_s1 = s1;
	if (n == 0)
		return (s1);
	while ((n > 0))
	{
		*(char *)s1 = *(char *)s2;
		s1++;
		s2++;
		n--;
	}
	return (save_s1);
}
