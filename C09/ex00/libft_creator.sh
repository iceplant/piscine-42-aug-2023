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

ar rcs libft.a ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c

#cc -Wall -Wextra -Werror ft_putchar.c -o ft_putchar.sh
#cc -Wall -Wextra -Werror ft_strcmp.c -o ft_strcmp.sh
#cc -Wall -Wextra -Werror ft_swap.c -o ft_swap.sh
#cc -Wall -Wextra -Werror ft_putstr.c -o ft_putstr.sh
#cc -Wall -Wextra -Werror ft_strlen.c -o ft_strlen.sh

# # try to get this working?
#names='ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c'
#for name in $names
#do
#	result=$(echo $name | sed "s/$.c/$.sh/g")
#	echo $result	
#done
#echo All done
