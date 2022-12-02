/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:36:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:16 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	En gros c'est comme un strchr mais vu qu'on manipule de la memoire
**	et pas des str, ya des cast un peu de partout. 
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		size_t	size = (atoi(av[1]));
// 		char	str[] = "test plusieurs lettres";
// 		int		letter = 'u';
// 		printf("%p\n",ft_memchr(str, letter, size));
// 		printf("%p\n",memchr(str, letter, size));
// 	}
// }