/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:43:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 13:51:29 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_char_board_info_line_length(char *char_board)
{
	int	i;

	i = 0;
	while (char_board[i] != '\n' && char_board[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

// This includes terminating newlline
// + 1 at end because we have an index and we want a length
int	get_char_board_line_length(char *char_board)
{
	int	i;
	int	first_line_length;

	i = 0;
	while (char_board[i] != '\n' && char_board[i] != '\0')
	{
		i++;
	}
	first_line_length = i + 1;
	i++;
	while (char_board[i] != '\n' && char_board[i] != '\0')
		i++;
	return (i - first_line_length + 1);
}

// these are slow can we call
// line-length once at the beginning and never again?
char	get_char_board_val(char *char_board, int row, int col)
{
	int	line_length;
	int	position;

	line_length = get_char_board_line_length(char_board);
	position = 5 + (row * line_length) + col;
	return (char_board[position]);
}

void	set_char_board_val(char *char_board, int row, int col, char val)
{
	int	line_length;
	int	position;

	line_length = get_char_board_line_length(char_board);
	position = 5 + (row * line_length) + col;
	char_board[position] = val;
}
