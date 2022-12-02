/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:04:26 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:04:47 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Compte le nombre de maillons dans une liste chainee.
**	lst : debut de la liste.
*/

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

/*
**	On sait que le dernier maillon d'une liste pointe sur NULL. (next = NULL)
**	Donc on boucle et on compte en parcourant notre liste, tant qu'on arrive pas
**	sur un maillon ou next = NULL.
**	
**	On a une variable du meme type que lst qui est temp.
**		temp devient une copie de la liste *lst, qui va permmettre de parcourir *lst
**	Dans notre boucle, on dit que temp = variable next de notre structure,
**		c'est comme sa qu'on passe d'un maillon a lautre.
**		on saute d'un maillon a l'autre grace a leurs pointeurs (next)
**	On incremente i, pour compter combien de maillon avec next = non-NULL on a.
**	
**	Donc quand temp arrivera sur le dernier maillon, il prendra la valeur NULL
**	incrementera i, et ne rebouclera pas puis retournera i.
*/