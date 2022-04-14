/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:44:11 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:39:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*save_ptr;

	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	save_ptr = ptr;
	if (!ptr)
		return (0);
	while (*s)
	{
		*ptr = *(char *)s;
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (save_ptr);
}
