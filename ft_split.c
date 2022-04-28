/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:12:47 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/27 22:56:18 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	n_words;

	n_words = 1;
	while (*s)
	{
		if (ft_strchr(s, c) != 0)
			n_words++;
		s++;
	}
	return (n_words);
}

static char	*ft_get_word(char *s, char c)
{
	char	*ptr;
	char	*ptr_res;
	size_t	len;

	*ptr = *s;
	while (*s && ft_strchr(*s, c) == 0)
	{
		len++
		s++;
	}
	ptr_res = ft_substr(ptr, 0, len + 1);
	return (ptr_res);
}

char	**ft_split(const char *s, char c)
{
	char	**str_res;
	int		n_words;
	int		id;

	n_words = 0;
	id = 0;
	if (s == 0 || c == 0)
		return (0);
	if (ft_strchr(s, c))
		(char *)s = ft_strtrim(s, c);
	n_words = ft_count_words(s, c);
	if (n_words == 1)
	{
		str_res = (char **)malloc(sizeof(char *) * (2));
		str_res[0] = s;
		str_res[1] = '\0';
	}
	else
	{
		str_res = (char **)malloc(sizeof(char *) * (n_words + 1));
		while (str_res[i] < n_words)
		{
			str_res[i] = ft_get_word(s, c);
			s++;
			i++;
		}
		str_res[i] = '\0';
		return (str_res);
	}
}
