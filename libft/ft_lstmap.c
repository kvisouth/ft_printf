/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:30:34 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 19:31:16 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creer une nouvelle liste qui est le resultat de f sur chaque elem. de lst
**	Si il ya un probleme de malloc, toute la nouvelle liste est supprimee.
**	lst : L’adresse du pointeur vers un élément.
**	f : L’adresse de la fonction à appliquer.
**	del : adresse de la fct. permettant de suppr. le contenu de l'element
**	On utilise del sur toute la nouvelle liste en cas d'echec malloc.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*elem;
	t_list	*temp;

	temp = lst;
	newlist = NULL;
	while (temp != NULL)
	{
		elem = ft_lstnew((*f)(temp->content));
		if (!elem)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, elem);
		temp = temp->next;
	}
	return (newlist);
}

/*
**	Pour travailler avec lst on utilise une variable temp qui est une copie de lst
**	Comme pour lst_iter, ou lst_clear, elle permettra de se balader dans la liste
**	
**	Pour chaque iteration dans la liste lst :
**	1. On creer un nouvel element (elem) qui est une copie de l'element de lst.
**		Mais ou on a appliquer la fonction f dessus.
**	2. Vu qu'on utilise ft_lstnew, on utilise donc un malloc et pour le proteger
**		en plus de free, on efface toute la nouvelle liste grace a ft_lstclear.
**		depuis le debut de la nouvelle liste, d'ou &newlist.
**	3. Avec la fonction ft_lstadd_back, on ajoute l'element de l'etape 1, si
**		le malloc a ete reussi, a notre liste newlist.
**		On envoie &newlist (debut de newlist) car ft_lstadd_back s'occupe
**		tout seul d'aller jusqua la fin de la liste et ajouter l'element.
**	4. Puis on passe sur l'element suivant de lst avec notre fonction temp
**		Comme ce qu'on fait dans lst_iter ou lst_clear.
*/