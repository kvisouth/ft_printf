/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:01:32 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 11:56:14 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Concatene *s1 et *s2 dans une nouvelle chaine.
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	size;
	int		i;
	int		j;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf ("%s",ft_strjoin (av[1], av[2]));
// }