/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:43:11 by nok               #+#    #+#             */
/*   Updated: 2022/12/06 16:22:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}


int	ft_putnbr(long int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
	{
		a = -1;
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (nb * a);
}

// int main (int ac, char **av)
// {
// 	(void)ac;
// 	printf("\nNB : %d",ft_putnbr(atoi(av[1])));
// }
