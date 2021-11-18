# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asilva <asilva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 11:48:43 by asilva            #+#    #+#              #
#    Updated: 2021/11/17 13:38:36 by asilva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME = libftprintf.a

INCLUDE	= ft_printf.h

SRC  =	$(shell find . -maxdepth 1 -type f -name "*.c")

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

test: 
	gcc $(OBJS) $(FLAGS)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
