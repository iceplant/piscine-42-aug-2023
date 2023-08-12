/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:40:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 19:34:32 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//necessary for write statments
#include <unistd.h>

//function prototypes that are declared/defined in other files compiled 
//with this one
void	ft_putchar(char c);

void	general_rush(int x, int y, int option);

//helper function that shows the user what call to rush() is being made and 
//what the output of that call is. 
void	eval_vals(int x, int y, int option)
{
	char	char_x;
	char	char_y;

	char_x = x + '0';
	char_y = y + '0';
	write(1, "rush(", 5);
	write(1, &char_x, 1);
	write(1, ", ", 2);
	write(1, &char_y, 1);
	write(1, ")\n", 2);
	general_rush(x, y, option);
	write(1, "\n", 1);
}

//main method, runs our test cases
int	main(void)
{
	eval_vals(5, 3, 0);
	eval_vals(5, 1, 1);
	eval_vals(1, 1, 2);
	eval_vals(1, 5, 3);
	eval_vals(4, 4, 4);
	
	/*
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);*/
	return (0);
}
