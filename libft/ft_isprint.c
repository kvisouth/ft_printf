/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:30:34 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:13:16 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		if (ft_isprint(atoi(av[1])) == 1)
// 			printf("%s","oui");
// 		else
// 			printf("%s (mettre la valeur ASCII !)","non");
// 	}
// }