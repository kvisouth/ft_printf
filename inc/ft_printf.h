/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:13:09 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/07 15:04:31 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_putstr(char *s);
int		ft_putptr(unsigned long ptr);
int		ft_putnbr(long int nb);
int		ft_puthex(unsigned long nbr, char caps);
int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
char	*ft_strrev(char *str);
int		ft_printf(const char *format, ...);

#endif