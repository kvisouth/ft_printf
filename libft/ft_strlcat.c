/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:58 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 18:58:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Concatene *src a *dest et le termine par un '\0', retourne la longueur de
**	la chaine quil a essayer de creer. Va concat. au max : size - strlen(dest)-1.
**	En gros retourne la taille totale de dest en memoire.
**
**	Si la size est plus petite ou egale a la longueur de *dest, on retourne
**	la size + la longueur de *src
**	On parcours tout *src jusqu'a size -1 : pourquoi -1, car on veut mettre un \0
**	Puis on copie dans *dest
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (size + lensrc);
	i = lendest;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}

// #include <bsd/string.h>
// int	main (int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("mon strlcat : %ld\n", ft_strlcat(av[1], av[2], atoi(av[3])));
// 		// printf("strlcat off : %ld\n\n", strlcat(av[4], av[5], atoi(av[6])));
// 		printf("dest apres ft_strlcat : %s\n",av[1]);
// 		// printf("dest apres strlcat    : %s\n",av[4]);
// 	}
// }