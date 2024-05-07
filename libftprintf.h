/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famendes <famendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:10:06 by famendes          #+#    #+#             */
/*   Updated: 2024/05/03 19:46:24 by famendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_printf_char(int c, int i);
int	ft_printf_str(const char *str, int i);
int	ft_printf_ptr(unsigned long long ptr, int i);
int	ft_printf_num(int nb, int i);
int	ft_printf_unsdec(unsigned int nb, int i);
int	ft_printf_hex(unsigned int nb, int i, char specifier);

#endif
