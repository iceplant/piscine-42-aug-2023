/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:40:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 13:57:57 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_top_or_bottom(int x, int y)
{
	int	i;

	ft_putchar('A');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_put_middle(int x, int y)
{
	int	i;

	if (x == 0 || y == 0)
		return ;
	ft_putchar('B');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	ft_put_top_or_bottom(x, y);
	i = 0;
	while (i < y - 2)
	{
		ft_put_middle(x, y);
		i++;
	}
	if (y > 1)
		ft_put_top_or_bottom(x, y);
}
/*
void	eval_vals(int x, int y)
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
	rush(x, y);
	write(1, "\n", 1);
}
*/
/*
eval_vals(5, 3);
eval_vals(5, 1);
eval_vals(1, 1);
eval_vals(1, 5);
eval_vals(4, 4);
*/

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
}
