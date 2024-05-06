/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:20:27 by famendes          #+#    #+#             */
/*   Updated: 2024/05/06 18:12:49 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int nb, int i, const char specifier)
{
	if (nb == 0)
	{
		i += write (1, "0", 1);
		return (i);
	}
	if (nb >= 16)
	{
		i = ft_printf_unsdec(nb / 16, i);
		i = ft_printf_unsdec(nb % 16, i);
	}
	else
	{
		if (nb <= 9)
			i = ft_printf_char(nb + 48, i);
		else 
		{
			if (specifier == 'x')
				i = ft_printf_char(nb - 10 + 'a', i);
			if (specifier == 'X')
				i = ft_printf_char(nb - 10 + 'A', i);
		}
	}
	return (i);
}
