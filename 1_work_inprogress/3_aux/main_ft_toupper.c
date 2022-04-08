/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:19:07 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 22:23:32 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	char	ch;

	ch = 0;
	printf("Original: %c\n", toupper(ch));
	printf("Copy: %c\n", ft_toupper(ch));
	return (0);
}
