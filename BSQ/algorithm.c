/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:13:08 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 13:27:56 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// forbidden!!!!
#include <stdio.h>

// char_baord.c
int		get_char_board_line_length(char *char_board);
char	get_char_board_val(char *char_board, int row, int col);
void	set_char_board_val(char *char_board, int row, int col, char val);

// int_board.c
int		*make_int_board(int num_rows, int num_columns);
int		get_int_board_val(int *int_board, int row, int col);
void	set_int_board_val(int *int_board, int row, int col, int val);
char	obstacle(char *char_board);

int	smallest(int a, int b, int c)
{
	int	rtn;

	rtn = a;
	if (b < rtn)
		rtn = b;
	if (c < rtn)
		rtn = c;
	return (rtn);
}

void	update_board_position(char *char_board, int *int_board, int row,
		int col)
{
	int	line_length;
	int	new_val;
	int	up;
	int	left;
	int	up_left;

	line_length = get_char_board_line_length(char_board);
	if (get_char_board_val(char_board, row, col) == obstacle(char_board))
		set_int_board_val(int_board, row, col, 0);
	else if (row == 0 || col == 0)
		set_int_board_val(int_board, row, col, 1);
	else
	{
		up = get_int_board_val(int_board, row - 1, col);
		left = get_int_board_val(int_board, row, col - 1);
		up_left = get_int_board_val(int_board, row - 1, col - 1);
		new_val = smallest(up, left, up_left) + 1;
		set_int_board_val(int_board, row, col, new_val);
	}
}

// handle case where empty, obstacle, or full are digits
// // need line_length - 1 to avoid overwriting the last element
// of each line which is \n
void	set_numbers(char *char_board, int *int_board)
{
	int	num_lines;
	int	line_length;
	int	row;
	int	col;

	num_lines = char_board[0] - '0';
	line_length = get_char_board_line_length(char_board);
	row = 0;
	while (row < num_lines)
	{
		col = 0;
		while (col < line_length - 1)
		{
			update_board_position(char_board, int_board, row, col);
			col++;
		}
		row++;
	}
}

void	fill_square_helper(char *char_board, int row_so_far, int col_so_far,
		int so_far)
{
	int	row;
	int	col;

	row = row_so_far;
	while (row > row_so_far - so_far)
	{
		col = col_so_far;
		while (col > col_so_far - so_far)
		{
			printf("row: %d col %d\n", row, col);
			set_char_board_val(char_board, row, col, 'X');
			col--;
		}
		row--;
	}
}

// TODO: change the way we're getting number of lines in first while
void	fill_square(char *char_board, int *int_board)
{
	int	row;
	int	col;
	int	so_far;
	int	row_so_far;
	int	col_so_far;

	row = 0;
	so_far = 0;
	while (row < char_board[0] - '0')
	{
		col = 0;
		while (col < get_char_board_line_length(char_board) - 1)
		{
			if (get_int_board_val(int_board, row, col) > so_far)
			{
				so_far = get_int_board_val(int_board, row, col);
				row_so_far = row;
				col_so_far = col;
			}
			col++;
		}
		row++;
	}
	fill_square_helper(char_board, row_so_far, col_so_far, so_far);
}
