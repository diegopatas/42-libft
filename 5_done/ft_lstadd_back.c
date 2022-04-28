/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:25:17 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/27 13:55:28 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*aux;

	aux = *lst;
	last = ft_lstlast(aux);
	if (last == 0)
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		last->next = new;
		new->next = 0;
	}
}
