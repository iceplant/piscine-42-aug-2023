/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:29:10 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/29 19:00:41 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// first two positions of board are #rows and # columns!!!
int *make_int_board(int num_rows, int num_columns)
{
	int *int_board;

	int_board = malloc(sizeof(int) * num_rows * num_columns + 2);
	if (!int_board)
		return (NULL);
	int_board[0] = num_rows;
	int_board[1] = num_columns;
	return (int_board);
}

int get_int_board_val(int *int_board, int row, int col)
{
	int position;
	int num_rows;
	int	num_columns;

	num_rows = int_board[0];
	num_columns = int_board[1];

	position = 2 + row*num_columns + col;

	return (int_board[position]);
}

void set_int_board_val(int *int_board, int row, int col, int val)
{
	int position;
	int num_rows;
	int	num_columns;

	num_rows = int_board[0];
	num_columns = int_board[1];

	position = 2 + row*num_columns + col;

	int_board[position] = val;
}


