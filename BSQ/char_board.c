/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:43:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/29 20:21:38 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//should we check if #cols given is legit?
int get_char_board_line_length(char *char_board)
{
    int i;

	i = 5;
   while (char_board[i] != '\n')
		i++;
	return (i - 4);
  }

// these are slow - can we call line-length once at the beginning and never again?
char get_char_board_val(char *char_board, int row, int col)
{
	int line_length = get_char_board_line_length(char_board);
	int position = 5 + (row * line_length) + col;
	return char_board[position];
}

void set_char_board_val(char *char_board, int row, int col, char val)
{
	int line_length = get_char_board_line_length(char_board);
	int position = 5 + (row * line_length) + col;
	char_board[position] = val;
}

char obstacle(char *char_board)
{
	return (char_board[2]);
}
