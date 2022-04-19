/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:56:34 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/17 20:55:53 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(dst);
	ptr = (char *)dst + len;
	while (*src && size > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		size--;
	}
	*ptr = '\0';
	return (len + ft_strlen(src));
}
