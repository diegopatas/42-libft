/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:39:39 by ddiniz            #+#    #+#             */
/*   Updated: 2022/04/07 13:30:34 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 		return (1);
// 	return (0);
// }

// int	ft_isalpha(int c)
// {
// 	if ((c >= 65 && c <= 90)
// 		|| (c >= 97 && c <= 122))
// 			return (1);
// 	return (0);
// }

//TODO: delete this

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
