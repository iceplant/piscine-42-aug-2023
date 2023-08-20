/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:27 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 14:48:31 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//#include "utils.c" // seems like we can do transitive includes and its fine
//#include "solve.c"

void	ft_init_board_zeros(char board[4][4]);
int		ft_solve(char board[4][4], char *edges, int rows_filled,
			int board_dimension);


int	main(int argc, char **argv)
{
	char	edges[16];
	int		arg_index;
	int		edge_index;
	char	board[4][4];

	arg_index = 0;
	edge_index = 0;
	if (argc == 1)
		return (0);
	while (argv[1][arg_index] != '\0')
	{
		if (argv[1][arg_index] != ' ')
		{
			edges[edge_index] = argv[1][arg_index];
			edge_index++;
		}
		arg_index++;
	}
	ft_init_board_zeros(board);
	if (ft_solve(board, edges, 0, 4) == 0)
		write(1, "Error\n", 6);
}
