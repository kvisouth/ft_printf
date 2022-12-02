/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:50:04 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 16:59:08 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Prend en parametre une lettre et la compare a char c 
**	pour voir si c'est un separateur (1)
*/

static int	is_sep(const char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

/*
**  Retourne en int la longueur d'un mot.
**	Parcours le mot et s'arrete des qu'il y a un separateur
**	Enfait c'est un strnlen, ou n est le separateur.
*/

static size_t	ft_strnlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && is_sep(s[i], c) == 0)
		i++;
	return (i);
}

/*
** C'est un strlen mais qui ne compte pas les separateurs.
** Compte les separateurs et strlen puis retourne strlen - separateurs.
*/

static size_t	strcnt(const char *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		while (is_sep(s[i], c) == 1 && s[i])
			i++;
		if (s[i])
		{
			cpt++;
			i++;
		}
		while (is_sep(s[i], c) == 0 && s[i])
			i++;
	}
	return (cpt);
}

/*
**	Fonctionne comme strdup mais jusqua wdlen et non '\0'
**	Enfait c'est un strndup, ou n est le separateur, encore. 
*/

static char	*ft_strndup(const char *s, char c)
{
	int		wdlen;
	char	*wd;
	int		i;

	i = 0;
	wdlen = ft_strnlen (s, c);
	wd = malloc (wdlen * sizeof(char) + 1);
	if (!wd)
		return (NULL);
	while (i < wdlen)
	{
		wd[i] = s[i];
		i++;
	}
	wd[i] = '\0';
	return (wd);
}

/*
**	En gros le split comment il fonctionne:
**	1. Il malloc la taille du tableau de tableau grace a notre
**		fonction strcnt plus haut.
**		On precise sizeof char car nos tableau de tableau seront des *char.
**	2. Il parcours la chaine *s jusqua '\0', la base.
**	3. Dans le while, il check si on est sur un separateur ou sur '\0'
**		si oui il avance dans *s en incrementant le pointeur s.
**	4. vu qu'on est plus sur un separateur grace au if precedent
**		On est forcement sur un mot. Donc on strndup ce mot
**		dans le 1er tableau de **split.
**		Puis on passe au prochain tableau de **split en incrementant i.
**	5. vu qu'on a deja strndup notre mot, il nous interesse plus
**		donc on incremente s jusqu'a etre sur un separateur ou '\0'
**	6. Enfin, il sort de la boucle et met NULL sur le dernier tab de tab.
*/

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;

	strs = malloc ((sizeof(char *) * (strcnt(s, c) + 1)));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (is_sep(*s, c) == 1 && *s)
			s++;
		if (*s)
		{
			strs[i] = ft_strndup(s, c);
			i++;
		}
		while (is_sep(*s, c) == 0 && *s)
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

// int	main (int ac, char **av)
// {
// 		int	i = 0;
// 		if (ac == 2)
// 		{
// 			char	sep = ' ';
// 			char	**split = ft_split(av[1], sep);
// 			while (split[i])
// 			{
// 				printf("split %d : %s\n",i+1,split[i]);
// 				i++;
// 			}
// 		}
// }