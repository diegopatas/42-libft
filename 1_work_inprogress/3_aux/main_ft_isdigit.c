/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:18:44 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/05 20:45:04 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	char	*message = "Fail";
	char	d;

	// TESTE 1
	d = '1';
	if ((isdigit(d) != 0) && (ft_isdigit(d) != 0))
		message = "Pass";
	printf ("Teste 1: %s!\n", message);

	// TESTE 2
	d = 'a';
	if ((isdigit(d) == 0) && (ft_isdigit(d) == 0))
		message = "Pass";
	printf ("Teste 2: %s!\n", message);

	return (0);
}
