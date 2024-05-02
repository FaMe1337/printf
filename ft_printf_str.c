/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:10:37 by famendes          #+#    #+#             */
/*   Updated: 2024/05/02 19:34:48 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_str(const char str, int i)
{
	while (*str)
	{
		ft_printf_char(*str);
		i++;
		str++;
	}
	return (i);
}
