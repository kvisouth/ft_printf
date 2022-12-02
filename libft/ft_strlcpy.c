/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:29:39 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:25 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copie size caracteres de *src dans *dest
**	Puis termine *dest par un '\0'
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <bsd/string.h>
// int	main (int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%ld",strlcpy(av[1], av[2], atoi(av[3])));
// 		printf("%s","\n");
// 		//printf("%ld",strlcpy(av[4], av[5], atoi(av[6])));	
// 	}
// }