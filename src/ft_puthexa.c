/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 11:53:38 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int	ft_putnbr_hex(unsigned long nbr, char bs)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_putnbr_hex((nbr / 16), bs);
		len += ft_putnbr_hex((nbr % 16), bs);
	}
	else
	{
		if (nbr < 10)
			len += ft_putnbr(nbr);
		else
			len += ft_putchar(nbr - 10 + 'a' + bs - 'x');
	}
	return (len);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("\nlen : %d\n",ft_putnbr_hex(atoi(av[1]),'X'));
// 	}
// }
