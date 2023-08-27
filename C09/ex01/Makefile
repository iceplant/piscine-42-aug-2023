# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 18:48:33 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/27 19:52:11 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft
SOURCES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJECTS = ${SOURCES:.c=.o}
FLAGS = -Wall -Wextra -Werror

all: ${NAME}
${NAME}: ${OBJECTS} 
	cc ${FLAGS} -o ${NAME} ${OBJECTS}
%.o: %.c 
	cc ${FLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}
.PHONY: all clean fclean

re:

libft.a:
