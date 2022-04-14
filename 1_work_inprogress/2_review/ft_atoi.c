/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:37:31 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/12 15:31:42 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_atoi(const char *str)
{
    int	sign;
    int	nb;

    while ((*str >= 9 && *str <= 13) || (*str == 32))
    {
        str++;
    }
    if ((*str == 43) || (*str == 45) || isdigit(*str))
    {
        sign = 1;
        if (*str == 45)
        {
            sign *= -1;
            str++;
        }
        else if (*str == 43)
            str++;
        nb = 0;
        while (*str && (isdigit(*str)))
        {
            nb = nb * 10 + (*str - 48);
            str++;
        }
        return (nb * sign);
    }
    return (0);
}
