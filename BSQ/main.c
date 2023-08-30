/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:26:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 17:40:11 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_board(int *int_board);

// file.c
char	*ft_get_dict_str_from_file(char *filename);
char	*get_file_data(char *filename);

// char_baord.c
int		get_char_board_line_length(char *char_board);
char	get_char_board_val(char *char_board, int row, int col);
void	set_char_board_val(char *char_board, int row, int col, char val);
int		get_char_board_num_rows(char *char_board);
void	put_char_board(char *char_board);

// int_board.c
int		*make_int_board(int num_rows, int num_columns);
int		get_int_board_val(int *int_board, int row, int col);
void	set_int_board_val(int *int_board, int row, int col, int val);

// algorithm.c
void	set_numbers(char *char_board, int *int_board);
void	fill_square(char *char_board, int *int_board);
/*
int	check_chars(char **char_board)
{
	int		i;
	char	c1;
	char	c2;
	char	c3;

	i = 0;
	while (char_board[i] && char_board[i] != '\n')
	{
		i++;
	}
	c1 = char_board[i - 1];
	c2 = char_board[i - 2];
	c3 = char_board[i - 3];
	i++;
	while (char_board[i])
	{
		if (char_board[i] != c1 && char_board[i] != c2 &&
				char_board[i] != c3 && char_board[i] != '\n')
			return (0);
		i++;
	}
}

int	check_line_terminators(char **char_board)
{
	int	i;
	int	first_nl;
	int	second_nl;

	i = 0;
	first_nl = -2;
	second_nl = -1;
	while (char_board[i])
	{
		printf(char
		if (char_board[i] == '\n')
		{
			if (first_nl == -1)
				first_nl = i;
			else if (second_nl == -1)
				second_nl = i;
			else if (char_board[i - (second_nl - first_nl)] != '\n')
				return (0);
		}
		printf("first nl: %d second nl: %d\n", first_nl, second_nl);
		i++;
	}
	return (first_nl != -1 && second_nl != -1);
}


//All lines must have the same length.
//There’s at least one line of at least one box.
//At each end of line, there’s a line break.
//The characters on the map can only be those introduced in the first line.
//The map is invalid if a character is missing from the first line,
	or if two char-
//	acters (of empty, full and obstacle) are identical.
//The characters can be any printable character, even numbers.
//In case of an invalid map, your program should display map error on the error
//output followed by a line break. Your program will then move on to the next
//map
//
int	is_map_valid(char **char_board)
{
	return (check_line_terminators(char_board) && check_chars(char_board));
}
*/

void	solve_file(char *filename)
{
	char	*char_board;
	int		*int_board;

	char_board = get_file_data(filename);
	int_board = make_int_board(get_char_board_num_rows(char_board),
			get_char_board_line_length(char_board) - 1);
	set_numbers(char_board, int_board);
	fill_square(char_board, int_board);
	put_char_board(char_board);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			solve_file(argv[i]);
			i++;
		}
	}
	else if (argc == 1)
	{
		write(1, "No arguments passed, standard input read not yet implemented",
			61);
	}
	return (0);
}
