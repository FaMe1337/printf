# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: famendes <famendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 15:58:32 by famendes          #+#    #+#              #
#    Updated: 2024/05/02 19:40:52 by famendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
	ft_printf.c
	ft_printf_char.c
	ft_printf_str.c


OBJS = $(SRCS:.c=.o)

bonus : all

all : $(NAME)

$(NAME) : $(OBJS)
    ar -rcs $(NAME) $(OBJS)

%.o : %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean :
    rm -rf $(OBJS)

fclean : clean
	rm - rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
