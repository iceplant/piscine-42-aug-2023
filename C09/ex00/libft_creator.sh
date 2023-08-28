# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 15:39:06 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/28 14:30:03 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a

cc -Wall -Wextra -Werror ft_putchar.c -c
cc -Wall -Wextra -Werror ft_strcmp.c -c
cc -Wall -Wextra -Werror ft_swap.c -c
cc -Wall -Wextra -Werror ft_putstr.c -c
cc -Wall -Wextra -Werror ft_strlen.c -c

ar rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
