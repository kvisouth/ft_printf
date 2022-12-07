/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:43:11 by nok               #+#    #+#             */
/*   Updated: 2022/12/07 16:20:36 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*
	The difference with the ft_put... of libft, is the type of the functions.
	This one is an int, meanwhile the one of libft is a void.
	Why ? Because we need to count how many characters we are writing
	so ft_printf can return the exact number.
*/

int	ft_putnbr(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}

// int main (int ac, char **av)
// {
// 	(void)ac;
// 	printf("\nNB : %d",ft_putnbr(atoi(av[1])));
// }
