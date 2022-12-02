/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:28 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cherche c dans *s, puis quand il le trouve, retourne un pointeur
**	sur c dans *s, a la derniere occurence, strchr la premiere.
**	Le caractere c est un int mais est interprete comme un unsigned char !
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	last_occur = 0;
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			last_occur = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (last_occur);
}

// #include <bsd/string.h>
// int	main(int ac, char **av)
// {

// 	int tofind = 'f';
// 	if (ac == 2)
// 	{
// 		printf("ma foction  : %s",ft_strrchr(av[1],tofind));
// 		printf("%s","\n");
// 		printf("l'originale : %s",strrchr(av[1],tofind));
// 	}
// }
