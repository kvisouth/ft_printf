/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:46:33 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 18:59:21 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et renvoie un nouvel
**	élément. La variable membre ’content’ est
**	initialisée à l’aide de la valeur du paramètre
**	’content’. La variable ’next’ est initialisée à
**	NULL. 
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
