/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:30:02 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 17:12:07 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		if (ft_isalpha(atoi(av[1])) == 1)
// 			printf("%s","oui");
// 		else
// 			printf("%s (mettre la valeur ASCII !)","non");
// 	}
// }