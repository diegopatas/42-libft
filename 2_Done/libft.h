/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:31:42 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/19 15:08:00 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H
#include <stddef.h>

//<ctype.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

//<string.h>
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char s1, const char s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	ft_memmove(void *s1, const void *s2, size_t n);

//<stdlib.h>
int	ft_atoi(const char *str);
char	*ft_strdup(const char *s);

void	*ft_calloc(size_t nelem, size_t elsize);

//LEGACY
void	ft_bzero(void *s, size_t n);
#endif
