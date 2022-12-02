/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:19:05 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:17 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	memcmp fait comme strncmp mais dans la memoire.
**	Mais pourquoi on cast des unsigned char ?
**	Car c'est un standard (ISO-C99) qui dit que :
**
**	The sign of a nonzero value returned by the comparison functions memcmp,
**	strcmp, and strncmp is determined by the sign of the difference between
**	the values of the first pair of characters (both interpreted as unsigned char)
**	that differ in the objects being compared.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		char s1[] = {-128, 0, 127, 0};
// 		char s2[] = {0, 0, 127, 0};
// 		printf("%d",ft_memcmp(s2, s1, atoi(av[1])));
// 	}
// }