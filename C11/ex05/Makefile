# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 18:47:14 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/30 18:55:13 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= src/do_op.c src/ft_atoi.c src/ft_putnbr.c  src/functions.c src/helpers.c
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
OBJS	= ${SRCS:.c=.o}
RM		= rm -rf
HEADERS = ./includes/

all		: $(NAME)

%.o		: %.c
		$(CC) $(FLAGS) -c -I ${HEADERS} $< -o $@
	
$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
		$(RM) $(OBJS)

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
