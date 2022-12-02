/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:46:33 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:31:12 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Ajoute l’élément ’new’ à la fin de la liste.
**	lst : adresse du pointeur vers le premier elem. de la liste.
**	new : adresse du pointeur vers l'element a rajouter dans la liste.
**
**  L'element est deja creer, donc le but est de faire pointer le dernier
**  maillon de la liste vers new.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
**	Ici, si la liste est vide, new sera le nouveau et le seul elem. de la liste. 
**	Puis on utilise la fonction ft_lstlast pour se placer sur le dernier elem.
**		de la liste.
**	Enfin, on fais en sorte que le dernier elem. pointe vers new.
*/