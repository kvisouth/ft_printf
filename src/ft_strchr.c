/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:40:30 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:22 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cherche c dans *s, puis quand il le trouve, retourne un pointeur
**	sur c dans *s, a la premiere occurence. 
**	Le caractere c est un int mais est interprete comme un unsigned char !
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int tofind = 0;
// 		printf("tofind :%d\n", tofind);
// 		printf("mon strchr :%s", ft_strchr(av[1],tofind));
// 		printf("%s","%\n");
// 		printf("l'original :%s", strchr(av[1],tofind));
// 	}
// }