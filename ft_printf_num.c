/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:29:15 by famendes          #+#    #+#             */
/*   Updated: 2024/05/07 16:24:09 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_num(int nb, int i)
{
	long	nbl;

	nbl = nb;
	if (nbl == 0)
		return (i += write(1, "0", 1));
	if (nbl < 0)
	{
		i += write(1, "-", 1);
		nbl *= -1;
	}
	if (nbl > 9)
	{
		i = ft_printf_num(nbl / 10, i);
		i = ft_printf_num(nbl % 10, i);
	}
	if (nbl < 10)
		i = ft_printf_char(nbl + 48, i);
	return (i);
}
