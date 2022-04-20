/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:19:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 11:56:06 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(int argc, char *argv[])
{
	char	ch;
	char	ch_1;

	ch = 'a';
	ch_1 = 'a';
	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %c\n", toupper(ch));
	printf("Copy: %c\n", ft_toupper(ch_1));
	return (0);
}
