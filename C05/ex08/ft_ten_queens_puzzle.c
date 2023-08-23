/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:01:08 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/23 12:09:05 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	is_new_char_valid(char *sol, int position)
{
	int	i;
	int	dx;
	int	dy;

	i = 0;
	while (i < position)
	{
		dx = position - i;
		dy = sol[position] - sol[i];
		if (dy == 0 || dy == dx || dy == (-1 * dx))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_sol(char *sol)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &sol[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

// position = where we will try adding a new value
int	ft_ten_queens_puzzle_helper(char sol[10], int position)
{
	int	i;
	int	sol_count;

	i = 0;
	sol_count = 0;
	if (position == 10)
	{
		ft_print_sol(sol);
		return (1);
	}
	while (i < 10)
	{
		sol[position] = i + '0';
		if (is_new_char_valid(sol, position))
			sol_count += ft_ten_queens_puzzle_helper(sol, position + 1);
		i++;
	}
	return (sol_count);
}

int	ft_ten_queens_puzzle(void)
{
	char	sol[10];
	int		i;
	int		rtn;

	i = 0;
	while (i < 10)
	{
		sol[i] = '-';
		i++;
	}
	rtn = ft_ten_queens_puzzle_helper(sol, 0);
	return (rtn);
}

/*
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}*/
