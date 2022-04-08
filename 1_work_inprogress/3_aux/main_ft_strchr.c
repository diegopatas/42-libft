/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:14:37 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 12:01:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	*str = "Human coder";

	printf("Result     : %s\n", strchr(str, 'c'));
	printf("Original:    %s\n", str);
	printf("Copy result: %s\n", ft_strchr(str, 'c'));
	printf("Original:    %s\n", str);
	return (0);
}
