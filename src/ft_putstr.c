/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:49:18 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/06 17:09:09 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write (1, &s[i], 1);
			i++;
		}
	}
	return (i);
}

// int main(void)
// {
// 	char *s = "abc";
// 	printf("\n%d",ft_putstr(s));
// }