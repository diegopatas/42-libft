/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:39:54 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:08:43 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (ft_isprint(c))
	{
		while (*s)
		{
			if (*s == c)
			{
				return ((char *)s);
			}
			s++;
		}
	}
	return (0);
}
