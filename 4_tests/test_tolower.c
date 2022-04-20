/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:19:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 11:48:23 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main(int argc, char *argv[])
{
	char	ch;
	char	ch_1;

	ch = 'A';
	ch_1 = 'A';
	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %c\n", tolower(ch));
	printf("Copy: %c\n", ft_tolower(ch_1));
	return (0);
}
