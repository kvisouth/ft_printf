/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:29:29 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:46:56 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	*s1 = "+-++yo+les-mec--+-"
**	*set= "+-"
**	ft_strtrim(s1, set) = yo+les-mec
**	enfait il enleve les char de *set a gauche et a droite seulement.
*/

static int	is_trim(const char letter, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (letter == set[i])
			return (1);
		i++;
	}
	return (0);
}

/*
**	Etape 1 : il ignore les caracteres a trimmer a gauche avec i
**	Etape 2 : parel a droite avec j, jusqu'a croiser i.
**	Ducoup on sait quon malloc i-j + 1 pour le \0
**	Etape 3 : On copie la chaine de i a j dans notre nouvelle string.
*/

char	*ft_strtrim(const char *s, const char *set)
{
	char	*str;
	int		la_taille;
	int		i;
	int		j;
	int		n;

	i = 0;
	j = ft_strlen(s) - 1;
	while (is_trim(s[i], set) == 1 && s[i])
		i++;
	while (is_trim(s[j], set) == 1 && j > i)
		j--;
	la_taille = (j - i) + 1;
	str = malloc(la_taille * sizeof(char) + 1);
	if (!str)
		return (NULL);
	n = 0;
	while (i <= j)
		str[n++] = s[i++];
	str[n] = '\0';
	return (str);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 	char *s1 = av[1];
// 	char *set = av[2];
// 	printf("Voici le trimage: %s",ft_strtrim(s1, set));
// 	}
// }

// int	main (void)
// {
// 	char *s1 = "++yo+mec++";
// 	char *set = "+";
// 	printf("Voici le trimage: %s",ft_strtrim(s1, set));
// }