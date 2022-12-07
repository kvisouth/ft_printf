/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 13:09:03 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

/*
	Will do the right conversion depending the letter which is already legal
	thamks to is_valid, sending the argument to print to the corresponding
	function.
*/

static int	ft_convert(const char letter, va_list args)
{
	int	count;

	count = 0;
	if (letter == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (letter == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (letter == 'p')
	{
		count += ft_putstr("0x");
		count += ft_puthex(va_arg(args, unsigned long), 'x');
	}
	else if (letter == 'd' || letter == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (letter == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	else if (letter == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (letter == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (letter == '%')
		ft_putchar(letter);
	return (count);
}

/*
	Will check if the letter after the '%' is legal. (if it's matching the
	letters corresponding to the conversions)
*/

int	is_valid(const char letter)
{
	if (letter == 'c' || letter == 's' || letter == 'p' || letter == 'd'
		|| letter == 'i' || letter == 'u' || letter == 'x' || letter == 'X'
		|| letter == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			index;
	int			count;
	va_list		args;

	va_start (args, format);
	count = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			if (is_valid(format[index + 1]) == 0)
				return (0);
			else
			{
				count += ft_convert(format[index + 1], args);
				index++;
			}
		}
		else
			count += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
