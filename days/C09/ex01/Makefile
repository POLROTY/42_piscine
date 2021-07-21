# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpol <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 22:04:38 by rpol              #+#    #+#              #
#    Updated: 2021/07/20 00:05:18 by rpol             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
C_FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
RM = rm -f
AR = ar -cr
O_FILES = ${C_FILES:.c=.o}
H_FILES = includes

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${H_FILES}

${NAME}: ${O_FILES}
	${AR} ${NAME} ${O_FILES}

clean:
	${RM} ${O_FILES}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean all
