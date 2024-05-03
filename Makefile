# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: famendes <famendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 15:58:32 by famendes          #+#    #+#              #
#    Updated: 2024/05/03 19:26:39 by famendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = \
	ft_printf.c  \
	ft_printf_char.c \
	ft_printf_str.c \
	ft_printf_ptr.c \
	ft_printf_dec.c \
	ft_printf_num.c \
	ft_printf_unsdec.c \
	ft_printf_hex_low.c \
	ft_printf_hex_up.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
