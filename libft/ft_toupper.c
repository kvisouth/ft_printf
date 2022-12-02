/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:29:34 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:23:41 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	int letter = ';';

	printf("%d",ft_toupper(letter));
	printf("%s", "\n");
	printf("%d",toupper(letter));
}
*/