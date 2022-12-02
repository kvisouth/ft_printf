/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:27:07 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/29 11:57:20 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Retourne la longueur de la chaine *s 
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("%ld",ft_strlen(av[1]));
		printf("%s","\n");
		printf("%ld",strlen(av[1]));
	}
}
*/