/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:53:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 20:24:19 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	*str = "Um codigo da casa 42.";

	printf("Result: %s", strrchr(str, 'c'));
	printf("Result: %s", ft_strrchr(str, 'c'));
	return (0);
}
