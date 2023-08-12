/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 15:06:17 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
