/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:28:32 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/27 15:25:14 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*save_n;
	t_list	*ptr_aux;

	if (lst != 0)
	{
		ptr_aux = lst;
		del(lst->content);
		save_n = ptr_aux->next;
		free(ptr_aux);
		ptr_aux = save_n;
	}
}
