/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:19:50 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/27 16:29:10 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr_aux;
	t_list	*prev;

	ptr_aux = *lst;
	while (ptr_aux)
	{
		prev = ptr_aux->next;
		del(ptr_aux->content);
		free(ptr_aux);
		ptr_aux = prev;
	}
	*lst = 0;
}
