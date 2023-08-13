/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 17:31:48 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// since we're compiling everything together, we prototype the function like
// this so it is useable in this file.
void	ft_putchar(char c);

// Prints top or bottom row of the rectangle
void	ft_put_top_or_bottom(int x)
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

// prints a middle row of the rectangle (other function handles top/bottom)
void	ft_put_middle(int x)
{
	int	i;

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

// function specified in doc that will be called from main
void	rush(int x, int y)
{
	int	i;

	ft_put_top_or_bottom(x);
	i = 0;
	while (i < y - 2)
	{
		ft_put_middle(x);
		i++;
	}
	if (y > 1)
		ft_put_top_or_bottom(x);
}
