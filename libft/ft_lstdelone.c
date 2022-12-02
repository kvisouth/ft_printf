/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:16:48 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:05:25 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Libère la mémoire de *lst en utilisant la fonction ’del’
**	puis avec free(3). La mémoire de ’next’ ne doit pas être free.
**	lst : l'element a free.
**	del : adresse de la fct. permettant de suppr. le contenu de l'element
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{	
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
