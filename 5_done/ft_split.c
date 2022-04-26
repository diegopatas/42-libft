/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:12:47 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/25 17:01:35 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*ptr_div;
	size_t	len_div;
	const char	*str_2;
	char	*str_1;
	char	**array_ptr;

	array_ptr = ft_calloc(2, sizeof(char*));
	ptr_div = ft_strchr(s, c);
	if (!ptr_div)
		return (0);
	len_div = ft_strlen(ptr_div);
	str_2 = (char *)malloc((len_div + 1) * sizeof(char));
	if(!str_2)
		return (0);
	str_1 = ft_substr(s, 0, (ft_strlen(s) - len_div));
	if (!str_1)
		return(0);
	while (*ptr_div)
	{
		*(char *)str_2 = *ptr_div;
		ptr_div++;
		str_2++;
	}
	*(char *)str_2 = '\0';
	array_ptr[0] = str_1;
	array_ptr[1] = (char *)str_2;
	return (array_ptr);
}
