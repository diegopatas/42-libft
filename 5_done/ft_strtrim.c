/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:11:30 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/23 17:12:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_set;
	size_t	len_s1;
	size_t	size_total;

	size_total = 0;
	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	if (ft_strncmp(s1, set, len_set) == 0)
	{
		s1 += len_set;
		size_total = ft_strlen(s1);
	}
	len_s1 = ft_strlen(s1);
	if (ft_strncmp(s1 + (len_s1 - len_set), set, len_set) == 0)
	{
		size_total = ft_strlen(s1) - len_set;
	}
	return (ft_substr(s1, 0, size_total));
}
