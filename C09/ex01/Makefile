# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 18:48:33 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/28 17:59:14 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = ${SOURCES:.c=.o}
FLAGS = -Wall -Wextra -Werror
INC_DIR = includes

DEPS = $(INC_DIR)/ft.h

${NAME}: ${OBJECTS}
	# cc -c ${FLAGS} -o ${NAME} ${OBJECTS}
	ar rc libft.a ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

%.o: %.c ${DEPS}
	cc ${FLAGS} -c $< -o $@ -I ${INC_DIR}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

#.PHONY: all clean fclean

re: fclean all

#libft.a: #this is covered by ${NAME} already
