/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:34:28 by asilva            #+#    #+#             */
/*   Updated: 2021/11/18 11:04:49 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_type(va_list ap, char *format)
{
	if (*format == ('%'))
		return (ft_putchar(1, *format));
	else if (*format == ('c'))
		return (ft_putchar(1, va_arg(ap, int)));
	else if (*format == ('s'))
		return (ft_putstr(1, va_arg(ap, char *)));
	else if (*format == ('d') || *format == ('i'))
		return (ft_putnbr_base(1, va_arg(ap, int), 10, 0));
	else if (*format == ('u'))
		return (ft_putunbr_base(1, va_arg(ap, unsigned int), 10, 0));
	else if (*format == ('x'))
		return (ft_putunbr_base(1, va_arg(ap, unsigned int), 16, 0));
	else if (*format == ('X'))
		return (ft_putunbr_base(1, va_arg(ap, unsigned int), 16, 1));
	else if (*format == ('p'))
		return (ft_putaddr(1, va_arg(ap, unsigned long)));
	return (1);
}

static int	ft_printprint(va_list ap, char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format_type(ap, format);
		}	
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start (ap, format);
	count = ft_printprint(ap, (char *)format);
	va_end (ap);
	return (count);
}
