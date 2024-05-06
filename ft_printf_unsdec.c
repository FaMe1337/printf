/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsdec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:31:46 by famendes          #+#    #+#             */
/*   Updated: 2024/05/06 18:12:23 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsdec(unsigned int nb, int i)
{
	if (nb == 0)
	{
		i += write(1, "0", 1);
		return (i);
	}
	if (nb > 9)
	{
		i = ft_printf_unsdec(nb / 10, i);
		i = ft_printf_unsdec(nb % 10, i);
	}
	if (nb < 10)
		i = ft_printf_char(nb + 48, i);
	return (i);
}
