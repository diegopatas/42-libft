/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:58:23 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 18:35:35 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//FIX: build a copy of function strlcpy

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*start;

	start = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (start);
}
