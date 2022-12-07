/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:55:28 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 16:34:50 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*
	It's writing adresses.
	Writing "0x" then the adress in hex using ft_puthex.
	It handle the case it has a NULL pointer by writing (nil)
*/

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
