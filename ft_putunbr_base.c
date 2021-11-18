/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:55:18 by asilva            #+#    #+#             */
/*   Updated: 2021/11/17 13:36:47 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_base(int fd, size_t nb, char base, char format)
{
	char	c;

	c = (nb % base);
	if (nb < (size_t)base && nb < 10)
		return (ft_putchar(fd, c + '0'));
	else if (nb < (size_t)base && nb > 9)
	{
		if (format == 0)
			return (ft_putchar(fd, c + 'a' - 10));
		else
			return (ft_putchar(fd, c + 'A' - 10));
	}
	if (c >= 10)
	{
		if (format == 0)
			return (ft_putunbr_base(fd, nb / base, base, format)
				+ ft_putchar(fd, c + 'a' - 10));
		else
			return (ft_putunbr_base(fd, nb / base, base, format)
				+ ft_putchar(fd, c + 'A' - 10));
	}
	else
		return (ft_putunbr_base(fd, nb / base, base, format)
			+ ft_putchar(fd, c + '0'));
}
