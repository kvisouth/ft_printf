/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/06 16:33:55 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libftprintf.h"

int ft_puthexa(int n, char caps)
{
	if (n >= 16)
	{
		ft_puthexa((n / 16), caps);
		ft_puthexa((n % 16), caps);
	}
	else
	{
		
	}
}