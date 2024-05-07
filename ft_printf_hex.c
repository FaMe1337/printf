/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:20:27 by famendes          #+#    #+#             */
/*   Updated: 2024/05/07 19:58:22 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nb, int i, const char specifier)
{
	if (nb >= 16)
	{
		i = ft_hex(nb / 16, i, specifier);
		i = ft_hex(nb % 16, i, specifier);
	}
	else
	{
		if (nb < 10)
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

int	ft_printf_hex(unsigned int nb, int i, const char specifier)
{
	if (nb == 0)
		i += write(1, "0", 1);
	else 
		i = ft_hex(nb, i, specifier);
	return (i);
}
