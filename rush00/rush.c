/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:48:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 11:48:47 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_top_or_bottom(int x, int y)
{
	int	i;

	if (x == 0 || y == 0)
		return ;
	write(1, "o", 1);
	i = 0;
	while (i < x - 2)
	{
		write(1, "-", 1);
		i++;
	}
	if (x > 1)
		write(1, "o", 1);
	write(1, "\n", 1);
}

void	ft_put_middle(int x, int y)
{
	int	i;

	if (x == 0 || y == 0)
		return ;
	write(1, "|", 1);
	i = 0;
	while (i < x - 2)
	{
		write(1, " ", 1);
		i++;
	}
	if (x > 1)
		write(1, "|", 1);
	write(1, "\n", 1);
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

int	main(void)
{
	write(1, "rush(5,3): \n", 12);
	rush(5, 3);
	write(1, "rush(5,1): \n", 12);
	rush(5, 1);
	write(1, "rush(1,1): \n", 12);
	rush(1, 1);
	write(1, "rush(1,5): \n", 12);
	rush(1, 5);
	write(1, "rush(4,4): \n", 12);
	rush(4, 4);
}
