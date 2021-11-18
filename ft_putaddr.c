/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:10:12 by asilva            #+#    #+#             */
/*   Updated: 2021/11/17 13:35:12 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(int fd, size_t addr)
{
	if (!addr)
		return (write(fd, "0x0", 3));
	return (write(fd, "0x", 2) + ft_putunbr_base(fd, addr, 16, 0));
}
