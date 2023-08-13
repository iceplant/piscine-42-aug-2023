/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 13:07:34 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

char	g_characters[5][7] = {{'o', '-', 'o', '|', 'o', '-', 'o'}, {'/', '*',
		'\\', '*', '\\', '*', '/'}, {'A', 'B', 'A', 'B', 'C', 'B', 'C'}, {'A',
		'B', 'C', 'B', 'A', 'B', 'C'}, {'A', 'B', 'C', 'B', 'C', 'B', 'A'}};

void	general_rush(int x, int y, int option)
{
	int	i;

	i = 0;
	ft_putchar('\n');
	ft_put_row(x, g_characters[option][0], g_characters[option][1],
		g_characters[option][2]);
	while (i < y - 2)
	{
		ft_put_row(x, g_characters[option][3], ' ', g_characters[option][3]);
		i++;
	}
	if (y > 1)
		ft_put_row(x, g_characters[option][4], g_characters[option][5],
			g_characters[option][6]);
}
