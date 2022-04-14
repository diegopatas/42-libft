/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:40:03 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 10:17:01 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//typedef	unsigned long long t_size //TODO: erase these lines

t_size	ft_strlen(const char *s)
{
	t_size	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
