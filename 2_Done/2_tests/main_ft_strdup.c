/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:52:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/13 21:57:43 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	char	*str = "Numero 42";

	printf("Original: %s\n", strdup(str));
	printf("Copy: %s\n", ft_strdup(str));
	return (0);
}
