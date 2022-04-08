/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:47:19 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/05 20:27:42 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	char	c;
	char	*message = "Fail"
	c = ' ';
	if ((isalpha(c) != 0) && (ft_isalpha(c) != 0))
		message = "Pass";
	printf ("Teste: %s!\n", message);
	return (0);
}
