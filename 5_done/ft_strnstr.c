/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:59:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 15:40:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	char	*save_dst;
	char	*save_src;
	size_t	save_n;
	int		diff;

	diff = 0;
	if (*src == 0)
		return((char *)dst);
	while (*dst)
	{
		if (*dst == *src)
		{
			save_dst = (char *)dst;
			save_src = (char *)src;
			save_n = n;
			while ((*src) && (*dst == *src) && n > 0)
			{
				diff += *dst - *src;
				src++;
				dst++;
				n--;
			}
			if (diff == 0)
				return (save_dst);
			src = save_src;
			dst = save_dst;
			n = save_n;
		}
		dst++;
	}
	return (0);
}
