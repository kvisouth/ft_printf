/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:23:16 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:23 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applique la fonction ’f’ à chaque caractère de la
**	chaîne de caractères transmise comme argument,
**	et en passant son index comme premier argument.
**	Chaque caractère est transmis par adresse à ’f’
**	afin d’être modifié si nécessaire.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
