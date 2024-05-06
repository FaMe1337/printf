/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:36:36 by famendes          #+#    #+#             */
/*   Updated: 2024/05/06 18:21:14 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_format(const char specifier, va_list ap, int i)
{
	if (specifier == 'c')
		i = ft_printf_char(va_arg(ap, int), i);
	else if (specifier == 's')
		i = ft_printf_str(va_arg(ap, const char *), i);
	else if (specifier == 'p')
		i = ft_printf_ptr(va_arg(ap, unsigned long long), i);
	else if (specifier == 'd')
		i = ft_printf_num(va_arg(ap, int), i);
	else if (specifier == 'i')
		i = ft_printf_num(va_arg(ap, int), i);
	else if (specifier == 'u')
		i = ft_printf_unsdec(va_arg(ap, unsigned int), i);
	else if (specifier == 'x')
		i = ft_printf_hex(va_arg(ap, unsigned int), i, specifier);
	else if (specifier == '%')
		i = write (1, "%", 1);
	else
		i += write (1, &specifier, 1);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
			i += printf_format(*++format, ap, i);
		else
		{
			write(1, format, 1);
			i++;
		}
		format++;
	}
	va_end(ap);
	return (i);
}
