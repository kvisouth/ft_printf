/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:43:11 by nok               #+#    #+#             */
/*   Updated: 2022/12/06 17:08:39 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

static int	ft_putnbr_write(long int nb)
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

int	ft_putnbr(long int nb)
{
	int	count;
	
	nb = ft_putnbr_write(nb);
	count = 0;
	if (nb < 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

// int main (int ac, char **av)
// {
// 	(void)ac;
// 	printf("\nNB : %d",ft_putnbr(atoi(av[1])));
// }
