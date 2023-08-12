/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:40:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 16:06:54 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

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

int	main(void)
{
	eval_vals(5, 3);
	eval_vals(5, 1);
	eval_vals(1, 1);
	eval_vals(1, 5);
	eval_vals(4, 4);
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	return (0);
}
