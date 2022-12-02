/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:07:46 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:04:48 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Ajoute l’élément ’new’ au début de la liste.
**	Genre on a une liste avec 3 maillons, apres cette fonction on aura
**	4 maillon, et ce maillon se pacera avant le premier, qui deviendra
**	deuxieme ducoup. 
**
**	**lst : pointeur sur le premier maillon de la liste (qui est un pointeur)
**	*new  : maillon deja fait, a mettre au debut de la liste.
**
**	Cas specifiques a gerer :
**	- Si on donne un *new vide, la fonction s'arrete.
**	- Si la liste **lst est vide, new est le seul maillon de la chaine.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/*
**	Si  new est NULL, on arrete la fonction
**	Si *lst est NULL, new devient le premier maillon de la chaine
**	Sinon, new pointe vers le premier element de la liste qui est *lst
**	Puis, on dit que le premier element de la liste est new.
*/