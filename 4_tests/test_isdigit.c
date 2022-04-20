/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:18:44 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/18 12:06:28 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	char	d;

	//TESTE 1
	d = '1';
	printf("---Test---\n");
	printf("Original: %d\n", isdigit(d));
	printf("Copy: %d\n", isdigit(d));
	// TESTE 2
	d = 'a';
	printf("---Test---\n");
	printf("Original: %d\n", isdigit(d));
	printf("Copy: %d\n", isdigit(d));

	return (0);
}
