/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:19:29 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 11:55:41 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Duplique la chaine *s 
*/

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%s", ft_strdup(av[1]));
// 		printf("%s", "\n");
// 		printf("%s", strdup(av[1]));
// 	}
// }