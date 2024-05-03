/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:29:15 by famendes          #+#    #+#             */
/*   Updated: 2024/05/03 19:16:21 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf_num(int nb, int i)
{
	char	str[10];
	int 	j;

	j = 0;
	if (nb == 0)
	{	
		i++;
		write(1, "0", 1);
	}
	if (nb < 0)
	{	
		write (1, "-", 1);
		nb *= -1;
		i++;
	}
	while (nb)
	{
		str[j++] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	while (j > 0)
		write (1, &str[--j], 1);		
	return (i);
}
