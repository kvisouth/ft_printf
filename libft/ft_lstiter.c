/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:21:47 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 15:00:43 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Itère sur la liste *lst et applique la fonction f au contenu chaque élément.
**	lst : L’adresse du pointeur vers un élément.
**	f : L’adresse de la fonction à appliquer.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (lst != NULL)
	{
		temp = lst->next;
		(*f)(lst->content);
		lst = temp;
	}
}
