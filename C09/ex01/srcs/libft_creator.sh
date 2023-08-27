# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 15:39:06 by rokamen-          #+#    #+#              #
#    Updated: 2023/08/24 15:59:49 by rokamen-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -Wall -Wextra -Werror ft_putchar.c -c
cc -Wall -Wextra -Werror ft_strcmp.c -c
cc -Wall -Wextra -Werror ft_swap.c -c
cc -Wall -Wextra -Werror ft_putstr.c -c
cc -Wall -Wextra -Werror ft_strlen.c -c

ar rcs libft.a ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c


