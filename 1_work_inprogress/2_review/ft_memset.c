/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:55:34 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 20:50:55 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //TODO: delete this

void	*ft_memset(void *s, int c, size_t n)
{
	while (*(char *)s || n > 0) //FIX: review
	{
		*(char *)s = c;
		s++;
		n--;
	}
	return (s);
}
