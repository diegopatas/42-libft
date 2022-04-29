/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:21:24 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/29 15:52:47 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = (x * (-1));
	}
	if (x >= 10)
		ft_putnbr_fd((x / 10), fd);
	ft_putchar_fd(((x % 10) + 48), fd);
}
