/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:42:24 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/06 13:14:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

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
	int		d;
	int		t;

	// teste 1
	ch = 'a';
	if ((ft_isascii(ch) != 0) && (isascii(ch) != 0))
		t = 1;
	else
		t = 0;
	test_message(t);

	// teste 2
	d = 127;
	if ((ft_isascii(d) != 0) && (isascii(d) != 0))
		t = 1;
	else
		t = 0;
	test_message(t);
	
	test_message(2);
	return (0);
}
