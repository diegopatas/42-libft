/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:28:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/14 10:31:44 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *s1, const void *s2, t_size n)
{
	const void	*save_end_s2;
	void		*save_end_s1;

	save_end_s2 = s2;
	save_end_s1 = s1;
	while (*(char *)s2 || n > 0) //TODO: read about void pointers
	{
		*(char *)s1 = *(char *)s2;
		s1++;
		s2++;
		n--;
	}
	*(char *)s1 = '\0';
	s2 = save_end_s2;
	return (save_end_s1);
}
