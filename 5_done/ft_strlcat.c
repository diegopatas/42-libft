/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:56:34 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 19:35:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*app;
	size_t	max;
	size_t	length_t;

	length_t = ft_strlen(dst) + ft_strlen(src);
	max = ft_strlen(dst);
	if (size < max)
		return (length_t - 2);
	if (size > max + 1)
	{
		app = dst + ft_strlen(dst);
		while (*src && size > max + 1)
		{
			*app = *src;
			src++;
			app++;
			size--;
		}
		*app = '\0';
	}
	return (length_t);
}
