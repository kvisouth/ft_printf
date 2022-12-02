/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:31:18 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:45 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_substr retourne une chaine dans *s qui commence a start, de longueur len.
**
**	petit exemple :
**	B O N J O U R \0
**	0 1 2 3 4 5 6 7 
**	  ^         ^
**	 start      len
**	$> ONJOUR
*/

/*
**	Renvoie la longueur de la chaine qu'on va malloc. 
**	Compte de 'start' a 'y', 'y' etant 'start' + 'len'
*/

static int	get_len(const char *s, unsigned int start, size_t len)
{
	unsigned int	cpt;
	unsigned int	y;

	cpt = 0;
	y = start + len;
	while (start < y && s[start] != '\0')
	{
		start++;
		cpt++;
	}
	return (cpt);
}

/*
**	Si on donne un start plus grand que la longueur de s
**	Start a pour valeur la longueur de s 
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		y;

	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	y = get_len(s, start, len);
	i = 0;
	str = malloc((y) + 1);
	if (!str || start > ft_strlen(s))
		return (NULL);
	while (i < y)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		unsigned int start = atoi(av[2]);
// 		size_t	size = atoi(av[3]);
// 		const char *str = av[1];
// 		printf("%s",ft_substr(str, start, size));
// 	}
// }