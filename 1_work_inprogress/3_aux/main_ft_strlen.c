/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:48:03 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/06 18:03:33 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

//typedef	unsigned long long t_size //TODO: erase this line
//TODO: elaborate the test even more

size_t ft_strlen(const char *s);

int	main(void)
{
	char	*str = "teste";
	printf("Test: %ld\n", ft_strlen(str));
	return (0);
}
