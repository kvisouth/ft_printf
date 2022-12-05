/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:59:42 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/05 13:22:19 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_parse(const char letter)
{
	if (letter == 'c')
		ft_percent_c();
	else if (letter == 's')
		ft_percent_s();
	else if (letter == 'p')
		ft_percent_p();
	else if (letter == 'd')
		ft_percent_d();
	else if (letter == 'i')
		ft_percent_i();
	else if (letter == 'u')
		ft_percent_u();
	else if (letter == 'x')
		ft_percent_x();
	else if (letter == 'X')
		ft_percent_X();
	else if (letter == '%')
		//putchar %
}

int	check_legal(const char letter) //dis si on retourne une lettre de l'exo
{
	const char legal = "cspdiuxX%";
	//strchr doit retourner 1 si c bon
}

int ft_printf(const char *format, ...)
{
	int	i;						//Le compteur que printf va retourner
	va_list		args; 			//Declare la structure 'args' de type va_list.
	va_start	(args, format); //Initialise la structure va_list (args)

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			{
				if (check_legal(format[i + 1]) == 0)
					return (NULL);
				else ()
			}
	}
}

printf("bonjour je suis %s jai %d ans jhabite dans le %s", prenom, age, ville)