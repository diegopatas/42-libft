/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:31:42 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/08 12:04:57 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	unsigned long long t_size

int	ft_isalpha(int c); // <ctype.h>
int	ft_isdigit(int c); // <ctype.h>
int	ft_isalnum(int c); // <ctype.h>
int	ft_isascii(int c); // <ctype.h>
int	ft_isprint(int c); // <ctype.h>
int	ft_toupper(int c); // <ctype.h>
int	ft_tolower(int c); // <ctype.h>

size_t ft_strlen(const char *s); //<string.h>
void	*ft_memset(void *s, int c, size_t n); //<string.h>
void	*ft_memcpy(void *s1, const void *s2, size_t n); //<string.h>
char	*ft_strchr(const char *s, int c); //<string.h>

void	ft_bzero(void *s, size_t n); //<string.h>
