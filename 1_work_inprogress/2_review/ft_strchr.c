/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:39:54 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 12:06:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: put the ft_isprint def here

char	*ft_strchr(const char *s, int c)
{
	char	*dup_s;
	if (ft_isprint(c))
	{
		while (*s)
		{
			if (*s == c)
			{
				dup_s = (char *)s;
				return (dup_s);
			}
			s++;
		}
	}
	return (0);
}
