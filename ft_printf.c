/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/05 22:42:33 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	'va_list' is used to hold a list of arguments with an unknown number & type.
	It's corresponding tothe '...' in the parameters of ft_printf.

	'va_start' is a macro that initialize a 'va_list' object.
	We call 'va_start' to be able to access the arguments.

	'va_end' is a macro that cleans up a 'va_list' object after
	the arguments have been accessed.
	We have to use this macro to free any resources that were allocated
	for the va_list object

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
