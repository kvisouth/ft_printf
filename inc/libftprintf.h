/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:13:09 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/06 19:55:49 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_putstr(char *s);
int	ft_putnbr(long int nb);
int	ft_puthexa(unsigned long nbr, char caps);
int	ft_putchar(char c);
size_t	ft_strlen(const char *s);

#endif