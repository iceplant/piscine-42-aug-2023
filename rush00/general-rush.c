/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 12:38:47 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

// Prints top or bottom row of the rectangle
void	ft_put_row(int x, char left, char middle, char right)
{
	int	i;

	ft_putchar(left);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

/*
int matrix[5][7] = { {'o', '-', 'o', '|', 'o', '-', 'o'} \
					{'/', '*', '\\', '*', '\\', '*', '/'}, \
	{'A', 'B', 'A', 'B', 'C', 'B', 'C'}, \
	{'A', 'B', 'C', 'B', 'A', 'B', 'C'}, \
	{'A', 'B', 'C', 'B', 'C', 'B', 'A'}}; \
*/

void general_rush(int x, int y, int option)
{
	char top_left;
	char top_edge;
	char top_right;
	char middle_edge;
	char bottom_left;
	char bottom_edge;
	char bottom_right;

	int	i;
	i = 0;

	
	if (option == 0) {
		top_left = 'o';
		top_edge = '-';
		top_right = 'o';
		middle_edge = '|';
		bottom_left = 'o';
		bottom_edge = '-';
		bottom_right = 'o';
	} else if (option == 1) {
		top_left = '/';
		top_edge = '*';
		top_right = '\\';
		middle_edge = '*';
		bottom_left = '\\';
		bottom_edge = '*';
		bottom_right = '/';
	} else if (option == 2) {
		top_left = 'A';
		top_edge = 'B';
		top_right = 'A';
		middle_edge = 'B';
		bottom_left = 'C';
		bottom_edge = 'B';
		bottom_right = 'C';
	} else if (option == 3) {
		top_left = 'A';
		top_edge = 'B';
		top_right = 'C';
		middle_edge = 'B';
		bottom_left = 'A';
		bottom_edge = 'B';
		bottom_right = 'C';
	} else if (option == 4) {
		top_left = 'A';
		top_edge = 'B';
		top_right = 'C';
		middle_edge = 'B';
		bottom_left = 'C';
		bottom_edge = 'B';
		bottom_right = 'A';
	} 

	ft_putchar('\n');

	ft_put_row(x, top_left, top_edge, top_right);
	while (i < y - 2)
	{
		ft_put_row(x,middle_edge, ' ', middle_edge );
		i++;
	}
	if (y > 1)
		ft_put_row(x, bottom_left, bottom_edge, bottom_right);
}
