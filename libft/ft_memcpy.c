/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:12:03 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 11:53:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copie *src dans *dst (ce sont des emplacement memoires.) jusqu'a n caracteres.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int n = atoi(av[1]);
// 		printf("copie de %d caracteres:\n",n);
// 		char	str1[] = "yo les mec";
// 		char	str2[11];
// 		ft_memcpy(str2, str1, n);
// 		printf("str1: %s\n",str1);
// 		printf("str2: %s",str2);
// 	}
// }