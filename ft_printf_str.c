/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:10:37 by famendes          #+#    #+#             */
/*   Updated: 2024/05/06 18:10:22 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(const char *str, int i)
{
	if (!str)
	{
		i += write(1, "(null)", 6);
		return (i);
	}
	while (*str)
	{
		i = ft_printf_char(*str, i);
		str++;
	}
	return (i);
}
