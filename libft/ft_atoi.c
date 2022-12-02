/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:58:50 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	1. Parcours tant qu'on a des whitespaces (\t \n \r \v \f \r et espace)
**	2. Si on est sur un symbole, on regarde si il s'agit d'un + ou -
**		Si c'est un +, on s'en fou, si c'est un - on rend symb en negatif.
**	3. Parcours tant qu'on est sur des chiffres, convertit ces chiffres en int
**	4. Retourne ces chiffres multiplier par symb. Si symb etait negatif, retourne
**  		donc un nombre negatif.
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	symb;
	int	nb;

	nb = 0;
	symb = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symb *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10 + str[i]) - '0';
		i++;
	}
	return (nb * symb);
}

// int	main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		printf("Mon atoi    : %d", ft_atoi(av[1]));
// 		printf("%s", "\n");
// 		printf("Le vrai atoi: %d", atoi(av[1]));
// 	}
// }