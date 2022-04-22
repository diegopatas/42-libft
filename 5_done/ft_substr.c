/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:09:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 20:50:41 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*save_sub;

	if (len > ft_strlen(&s[start] + 1))
		return (0);
	sub_str = (char *)malloc(len * sizeof(char));
	save_sub = sub_str;
	if (!sub_str)
		return (0);
	while (len--)
	{
		*sub_str = s[start];
		sub_str++;
		start++;
	}
	*sub_str = '\0';
	return (save_sub);
}
