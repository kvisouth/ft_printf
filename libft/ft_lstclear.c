/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:56:01 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:55:46 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Supprime et libère la mémoire de **lst et de tous les éléments
**	qui suivent, à l’aide de ’del’ et de free(3)
**	Enfin, le pointeur initial doit être mis à NULL.
**	**lst : L'adresse du pointeur vers un element
**	del : adresse de la fct. permettant de suppr. le contenu de l'element
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
