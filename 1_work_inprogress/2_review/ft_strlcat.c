/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:56:34 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:00:05 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	len;
	char	*ptr;

	len = ft_strlen(dst);
	ptr = (char *)des + len;
	while (*src && n > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		n--;
	}
	*ptr = '\0';
	return ((char *)src);
}
