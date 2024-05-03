/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:10:37 by famendes          #+#    #+#             */
/*   Updated: 2024/05/03 19:16:33 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tprintf.h"

int	ft_printf_str(const char *str, int i)
{
	while (*str)
	{
		ft_printf_char(*str, i);
		i++;
		str++;
	}
	return (i);
}
