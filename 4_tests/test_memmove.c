/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:26:56 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/21 14:58:09 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	str_1[50] = {'\0'}; 
	char	str_2[50] = "42";

	if (argc == 1)
		printf("====\n%s\n====\n", argv[0]);
	printf("Original: %s\n", str_1);
	printf("Moved: %s\n", (char *)memmove(str_1, str_2, 2));
	return (0);
}
