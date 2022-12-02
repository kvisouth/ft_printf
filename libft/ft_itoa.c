/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 16:58:49 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Transforme un int en char. Doit gerer INT_MIN et INT_MAX et les negatifs.
*/

static int	get_int_len(int n)
{
	int	cpt;

	cpt = 0;
	if (n < 0)
		cpt++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		cpt++;
		n = n / 10;
	}
	return (cpt);
}

static char	*ft_putnbr(int nb, char *strint)
{
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	strint[i--] = '\0';
	if (n == 0)
	{
		strint[0] = '0';
		return (strint);
	}
	if (n < 0)
	{
		strint[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		strint[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (strint);
}

char	*ft_itoa(int nb)
{
	char	*strint;
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	strint = malloc (sizeof(char) * i + 1);
	if (!strint)
		return (NULL);
	strint = ft_putnbr(nb, strint);
	return (strint);
}

// int	main(void)
// {
// 	printf("%s",ft_itoa(4242));
// }