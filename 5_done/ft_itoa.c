/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:13:49 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/25 23:24:05 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_n_zero(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (0);
	str[0] = 0 + '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_n_neg(int n)
{
	char	*str;
	long	spot;
	long	decomp;
	long	n_pos;

	n_pos = n *-1;
	decomp = n_pos;
	spot = 0;
	while (n_pos)
	{
		n_pos /= 10;
		spot++;
	}
	str = (char *)malloc((spot + 2) * sizeof(char));
	if (!str)
		return (0);
	str[spot + 1] = '\0';
	while (decomp)
	{
		str[spot] = decomp % 10 + '0';
		decomp /= 10;
		spot--;
	}
	str[spot] = '-';
	return (str);
}

static char	*ft_n_pos(int n)
{
	char	*str;
	long	spot;
	long	decomp;

	decomp = n;
	spot = 0;
	while (n)
	{
		n /= 10;
		spot++;
	}
	str = (char *)malloc((spot + 0) * sizeof(char));
	if (!str)
		return (0);
	str[spot] = '\0';
	while (decomp)
	{
		str[spot - 1] = decomp % 10 + '0';
		decomp /= 10;
		spot--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	number;

	number = n;
	if (number < -2147483648 || number > 2147483647)
		return (0);
	else if (number == 0)
		return (ft_n_zero());
	else if (number > 0)
		return (ft_n_pos(number));
	else
		return (ft_n_neg(number));
}
