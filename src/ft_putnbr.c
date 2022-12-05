/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:43:11 by nok               #+#    #+#             */
/*   Updated: 2022/12/05 19:30:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr ("-2147483648");
		return (11);
	}
	else if (n >= 0 && n < 10)
	{
		ft_putchar (n + '0');
		count++;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		count++;
		ft_putnbr(n * (-1));
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (count);
}
