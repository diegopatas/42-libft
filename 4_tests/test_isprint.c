/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:04:10 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 12:53:36 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	char	ch;

	ch = ' ';
	puts("---\nISPRINT\n---\n" "---Test---\n");
	printf("Original: %d\n", isprint(ch));
	printf("Copy: %d\n", ft_isprint(ch));
	return (0);
}
