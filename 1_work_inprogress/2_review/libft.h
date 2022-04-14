/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:31:42 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 14:18:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	unsigned long long int t_size;

//<ctype.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

//<string.h>
t_size	ft_strlen(const char *s);
t_size	ft_strlcpy(char *dst, const char *src, t_size size);
t_size	ft_strlcat(char *dst, const char *src, t_size size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char s1, const char s2);
int		ft_strncmp(const char *s1, const char *s2, t_size n)
void	*ft_memset(void *s, int c, t_size n);
void	*ft_memcpy(void *s1, const void *s2, t_size n);
void	ft_memmove(void *s1, const void *s2, t_size n);

//<stdlib.h>
int	ft_atoi(const char *str);

//LEGACY
void	ft_bzero(void *s, t_size n);

