/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:09:06 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/11 14:45:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: redo all the logic later.

#include <stddef.h>

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    char    *ptr;
    int is_equal;

    if (*s2 == 0)
        return (s1);
    while ((*s1) && (s1 <= s1 + n))
    {
        if (*s1 == *s2)
        {
            ptr = (char *)s1;
            while ((*s2) && (s1 <= s1 + n))
            {
                is_equal = *s1 - *s2;
                s2++;
                s1++;
            }
            if (is_equal == 0)
                return (ptr);
            s1--;
        }
        s1++;
    }
    return (0);
}
