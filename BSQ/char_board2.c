/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_board2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:50:27 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 14:11:25 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for write function
#include <unistd.h>

int		get_char_board_info_line_length(char *char_board);
int		get_char_board_line_length(char *char_board);
char	get_char_board_val(char *char_board, int row, int col);

char	obstacle(char *char_board)
{
	int	i;

	i = get_char_board_info_line_length(char_board);
	return (char_board[i - 3]);
}

char	full(char *char_board)
{
	int	i;

	i = get_char_board_info_line_length(char_board);
	return (char_board[i - 2]);
}

char	get_char_board_num_rows(char *char_board)
{
	int	i;
	int	so_far;

	i = 0;
	so_far = 0;
	while (char_board[i + 3] != '\n')
	{
		so_far *= 10;
		so_far += char_board[i] - '0';
		i++;
	}
	return (so_far);
}

void	put_char_board(char *char_board)
{
	int	num_rows;
	int	num_columns;
	int	row;
	int	col;
	char to_write;

	row = 0;
	col = 0;
	num_rows = get_char_board_num_rows(char_board);
	num_columns = get_char_board_line_length(char_board) - 1;
	while (row < num_rows)
	{
		col = 0;
		while (col < num_columns - 1)
		{
			to_write = get_char_board_val(char_board, row, col);
			write(1, &to_write,  1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
