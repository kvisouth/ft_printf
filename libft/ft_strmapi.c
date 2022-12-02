/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:25:51 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:26 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applique la fonction ’f’ à chaque caractère de la
**	chaîne de caractères passée en argument (*s) pour créer
**	une nouvelle chaîne de caractères (avec malloc(3))
**	résultant des applications successives de ’f’. 
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(ft_strlen(s) * sizeof (char) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
