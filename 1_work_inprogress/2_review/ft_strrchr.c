/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:39:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 22:19:24 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //typedef	unsigned long long t_size //TODO: erase these lines

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char	*ptr;

	len = ft_strlen(s);
	if (ft_isprint(c))
	{
		while (len > 0)
		{
			if (*(s + len) == c)
			{
				ptr = (char *)(s + len);
				return (ptr);
			}
			len--;
		}
	}
	return (0);
}
