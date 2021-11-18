/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:55:18 by asilva            #+#    #+#             */
/*   Updated: 2021/11/17 13:35:55 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int fd, ssize_t nb, char base, char format)
{
	int	bytes;

	bytes = 0;
	if (nb < 0)
	{
		bytes += write(1, "-", 1);
		nb = -nb;
	}
	return (ft_putunbr_base(fd, nb, base, format) + bytes);
}
