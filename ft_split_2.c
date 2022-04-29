/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:54:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 12:54:38 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t			word_count;
	size_t			i;
	unsigned int	flag;

	word_count = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			word_count++;
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (word_count);
}

static char	**feedstrs(char const *s, char c, size_t word_count, char **strs)
{
	size_t			word_index;
	size_t			s_index;
	size_t			word_start;
	unsigned int	flag;

	word_index = 0;
	s_index = 0;
	flag = 0;
	while (word_index < word_count)
	{
		if (s[s_index] != c && flag == 0)
		{
			word_start = s_index;
			flag = 1;
		}
		if (s[s_index] == '\0' || (s[s_index] == c && flag == 1))
		{
			strs[word_index] = ft_substr(s, word_start, s_index - word_start);
			flag = 0;
			word_index++;
		}
		s_index++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char			**strs;
	size_t			word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	strs = (char **) ft_calloc(word_count + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	feedstrs(s, c, word_count, strs);
	return (strs);
}
