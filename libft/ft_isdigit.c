/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:23:56 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:12:51 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		if (ft_isdigit(atoi(av[1])) == 1)
// 			printf("%s","oui");
// 		else
// 			printf("%s (mettre la valeur ASCII !)","non");
// 	}
// }