/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:40:55 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:18 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	memmove agit comme memcpy.
**	mais il gere le cas de chevauchement, qui arrive quand
**	le bloc memoire *dest est plus grand que celui de *src.
**	Selon le man, la copie dans ce cas de figure se passe
**	comme si *src etait copier dans une zone temporaire, puis
**	de temporaire vers *dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
