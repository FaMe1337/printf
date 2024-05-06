/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:23:04 by famendes          #+#    #+#             */
/*   Updated: 2024/05/06 18:14:15 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(unsigned long long ptr, int i)
{
	if (!ptr)
	{
		i += write(1, "(null)", 6);
		return (i);
	}
	i += write (1, "0x", 2);
	if (ptr >= 16)
	{
		i = ft_printf_ptr(ptr / 16, i);
		i = ft_printf_ptr(ptr % 16, i);
	}
	else
	{
		if (ptr <= 9)
			i = ft_printf_char(ptr + 48, i);
		else
			i = ft_printf_char(ptr - 10 + 'a', i);
	}
	return (i);
}
