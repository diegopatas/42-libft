/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:42:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/06 11:56:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	char	*mes = "Fail";
	char	ch;
	int		num;

	ch = 'a';
	num = 1;

	if ((ft_isalnum(ch) != 0) && (isalnum(ch) != 0))
		mes = "Pass";
	printf("Teste: %s\n", mes);

	if ((ft_isalnum(num) != 0) && (isalnum(num) != 0))
		mes = "Pass";
	printf("Teste: %s\n", mes);

	ch = ' ';
	if ((ft_isalnum(ch) != 0) && (isalnum(ch) != 0))
		mes = "Fail";
	else
		mes = "Pass";
	printf("Teste: %s!\n" "------------\nAll done...", mes);
	return (0);
}
