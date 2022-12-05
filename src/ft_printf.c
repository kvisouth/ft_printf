/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/05 16:22:01 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_parse(const char letter)
{
	if (letter == 'c')
		ft_percent_c();
	else if (letter == 's')
		ft_percent_s();
	else if (letter == 'p')
		ft_percent_p();
	else if (letter == 'd')
		ft_percent_id();
	else if (letter == 'i')
		ft_percent_id();
	else if (letter == 'u')
		ft_percent_u();
	else if (letter == 'x')
		ft_percent_x();
	else if (letter == 'X')
		ft_percent_X();
	else if (letter == '%')
		ft_putchar_fd(letter, 1);
}

int	check_legal(const char letter)
{
	if (letter == 'c' || letter == 's' || letter == 'p' || letter == 'd'
		|| letter == 'i' || letter == 'u' || letter == 'x' || letter == 'X'
		|| letter == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	va_list		args;

	va_start (args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (check_legal(format[i + 1]) == 0)
				return (NULL);
			else
			
		}
	}
}

//printf("bonjour je suis %s jai %d ans jhabite dans le %s", prenom, age, ville)