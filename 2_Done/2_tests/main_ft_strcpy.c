/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:25:10 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 16:44:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, const char *s2);

int	main(void)
{
	char	str1[50] = "Uma String de Teste";
	char	*str2 = "Uma Palavra";
	char	str3[50] = "Uma String de Teste";
	char	*str4 = "Uma Palavra";

	printf("Original: %s\n", str1);
	printf("Modified: %s\n", strcpy(str1, str2));
	printf("Original: %s\n", str3);
	printf("Modified: %s\n", ft_strcpy(str3, str4));
	return (0);
}
