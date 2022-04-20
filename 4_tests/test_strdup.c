/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:52:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 15:07:24 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*str = "Numero 42";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %s\n", strdup(str));
	printf("Copy: %s\n", ft_strdup(str));
	return (0);
}
