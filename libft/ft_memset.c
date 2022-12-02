/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:05:20 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 11:55:05 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Dans la memoire, a partir de *s, met 'n' fois le caractere 'c'.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int n = atoi(av[1]);
// 		printf("memset sur %d caracteres:\n",n);
// 		char str[] = "yo les mec";
// 		printf("%s\n",str);
// 		ft_memset(str, 's', n);
// 		printf("%s",str);
// 		return (0);
// 	}
// }