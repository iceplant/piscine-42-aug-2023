# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 21:41:47 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/30 21:42:54 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRCS	= doop.c ft_atoi.c ft_putnbr.c
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

.PHONY	: all clean fclean re
