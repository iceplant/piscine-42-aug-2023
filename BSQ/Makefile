# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:41:24 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/30 14:43:29 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
SRCS	= algorithm.c char_board.c char_board2.c file.c int_board.c main.c
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
OBJS	= ${SRCS:.c=.o}
RM		= rm -rf

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o		: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean	:
		$(RM) $(OBJS)

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
