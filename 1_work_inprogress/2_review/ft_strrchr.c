/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:39:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:11:49 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (ft_isprint(c))
	{
		while (len > 0)
		{
			if (*(s + len) == c)
			{
				return ((char *)(s + len));
			}
			len--;
		}
	}
	return (0);
}
