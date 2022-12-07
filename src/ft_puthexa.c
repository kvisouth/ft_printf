/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 16:23:00 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*
	It convert our nbr (decimal) into a hex, writing it.
	The last line is writing numbers superior to 10, which are
	ABCDEF in hex. And it's turning the letter into caps or not.
*/

int	ft_puthex(unsigned long nbr, char caps)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_puthex((nbr / 16), caps);
		len += ft_puthex((nbr % 16), caps);
	}
	else
	{
		if (nbr < 10)
			len += ft_putnbr(nbr);
		else
			len += ft_putchar(nbr - 10 + 'a' + caps - 'x');
	}
	return (len);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("\nlen : %d\n",ft_puthex(atoi(av[1]),'X'));
// 	}
// }
