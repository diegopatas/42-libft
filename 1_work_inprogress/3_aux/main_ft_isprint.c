/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:04:10 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/06 16:07:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

void	test_message(int nb)
{
	if ((nb != 1)
		&& (nb != 0)
		&& (nb != 2))
		printf("Teste: %s!\n", "Wrong boolean");
	else if (nb == 1)
		printf("Teste: %s!\n", "Pass");
	else if (nb == 0)
		printf("Teste: %s!\n", "Fail");
	else
		printf("%s!\n", "------------\nAll done...");
}

int	main(void)
{
	char	ch;
	int		t;

	ch = ' ';
	if ((ft_isprint(ch) != 0) && (isprint(ch) != 0))
		t = 1;
	else
		t = 0;
	test_message(t);

	ch = 0;
	if ((ft_isprint(ch) != 0) && (isprint(ch) != 0))
		t = 0;
	else
		t = 1;
	test_message(t);

	test_message(2);
	return (0);
}
