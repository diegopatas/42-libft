/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:53:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/20 09:46:52 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	char	*str = "Um codigo da casa 42.";
	char	ch;

	ch = '?';
	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %s", strrchr(str, ch));
	printf("Copy: %s", ft_strrchr(str, ch));
	return (0);
}
