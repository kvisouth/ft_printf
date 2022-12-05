/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/05 20:11:50 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		c += ft_putchar(va_arg(args, int));
	else if (letter == 's')
		c += ft_putstr(va_arg(args, char *))
	else if (letter == 'p')
		ft_percent_p();
	else if (letter == 'd' || letter == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (letter == 'u')
		c += ft_putnbr(va_arg(args, unsigned int));
	else if (letter == 'x')
		
	else if (letter == 'X')
		
	else if (letter == '%')
		ft_putchar(letter, 1);
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

//printf("bonjour je suis %s jai %d ans jhabite dans le %s", prenom, age, ville)