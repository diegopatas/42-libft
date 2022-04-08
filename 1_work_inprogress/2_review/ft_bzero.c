/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:02:41 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 21:57:13 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //TODO: delete this

void	ft_bzero(void *s, size_t n) //FIX: define t_size
{
	void	*save_end;

	save_end = s;
	while (*(char *)s || n > 0)
	{
		*(char *)s = 0;
		s++;
		n--;
	}
	return (save_end);
}
