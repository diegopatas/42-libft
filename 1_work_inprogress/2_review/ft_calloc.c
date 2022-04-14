/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:09:47 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:46:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size nelem, t_size elsize)
{
	void	*ptr;
	void	*save_ptr;

	ptr = malloc(nelem * elsize);
	save_ptr = ptr;
	if (!ptr)
		return (0);
	while (nelem--)
	{
		*(int *)ptr = 0;
		ptr++;
	}
	return (save_ptr);
}
