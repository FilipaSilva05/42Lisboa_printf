/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:34:35 by asilva            #+#    #+#             */
/*   Updated: 2021/11/17 13:34:37 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf.h"

int		ft_printf(const char *format, ...);
int		ft_putchar(int size, char c);
int		ft_putaddr(int fd, size_t addr);
ssize_t	ft_putstr(int fd, char *str);
int		ft_putnbr_base(int fb, ssize_t nb, char base, char format);
int		ft_putunbr_base(int fb, size_t nb, char base, char format);

#endif