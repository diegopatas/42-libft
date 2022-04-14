/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:09:06 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/12 15:16:08 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	*str = "     12345";
	char	*str_neg = "     -12345";

	printf("Original:\n%d\n", atoi(str));
	printf("Original negative:\n%d\n", atoi(str_neg));
	printf("Copy:\n%d\n", ft_atoi(str));
	printf("Copy negative:\n%d\n", ft_atoi(str_neg));
	return (0);
}
