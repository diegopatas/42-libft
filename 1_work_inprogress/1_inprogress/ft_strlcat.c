/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:27:58 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/11 19:02:05 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

char    *ft_strlcat(const char *s1, const char *s2, size_t n)
{
    size_t len;
    char *ptr;

    len = strlen(s1);
    ptr = (char *)s1 + len;
    while (*s2 && n > 0)
    {
        *ptr = *s2;
        s2++;
        ptr++;
        n--;
    }
    *ptr = '\0';
    return ((char *)s1);
}
