/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:42:52 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/30 18:01:49 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Un 'file descriptor' (fd) c'est un INT a bas niveau utiliser pour identifier
**	un fichier ouvert au niveau du Kernel.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
