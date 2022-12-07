/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 16:45:12 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*
	This function will send our va_arg to the correct function to write it.
	It is handling cspduixX%. Then count the length of what it wrote.
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
		count += ft_putptr(va_arg(args, unsigned long));
	else if (letter == 'd' || letter == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (letter == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	else if (letter == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (letter == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (letter == '%')
		count += ft_putchar(letter);
	return (count);
}

/*
	va_list is the type of the variable named args.
	Meaning there will be variable number of args. Can be 1, or 5, or 100..
	args is matching with the (...) in the prototype.

	va_start is used to initialize our va_list.
	He will store our args.

	Then we will simply compare every letter in *format.
	When we see a '%', we will look at the next letter, then try to match
	it with the function above to write things or not.
*/

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
			count += ft_convert(format[index + 1], args);
			index++;
		}
		else
			count += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
