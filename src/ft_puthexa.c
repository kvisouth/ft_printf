/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/06 19:55:47 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"


int	ft_puthexa(unsigned long nbr, char caps)
{
	if (nbr >= 16)
	{
		ft_puthexa((nbr / 16), caps);
		ft_puthexa((nbr % 16), caps);
	}
	else
	{
		if (nbr < 10)
			ft_putnbr(nbr);
		else
			ft_putchar(nbr - 10 + 'a' + caps - 'x');
	}
	return (1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_puthexa(atoi(av[1]),'x');
	}
}