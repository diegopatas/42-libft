/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:09:26 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/28 22:54:57 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*sub_str;

	len_s = ft_strlen(s);
	if (!s)
		return (0);
	if (len_s <= start)
		return ("");
	else if (len <= len_s - start)
		sub_str = (char *)malloc((len + 1) * sizeof(char));
	else
		sub_str = (char *)malloc((len_s - start + 1) * sizeof(char));
	if (!sub_str)
		return (0);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
