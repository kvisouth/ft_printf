/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:29:35 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:24:06 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	int letter = 'p';

	printf("%d",ft_tolower(letter));
	printf("%s", "\n");
	printf("%d",tolower(letter));
}
*/