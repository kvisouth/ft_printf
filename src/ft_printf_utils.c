/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:37:12 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/05 22:38:09 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

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
		return (i);
	}
	return (ft_putstr("(null)"));
}

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex(ptr, 'x');
	return (count);
}

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

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
