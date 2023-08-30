/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:26:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 13:14:49 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: cursed includes - plz delete
#include <stdio.h>

void	print_int_board(int *int_board);

// file.c
char	*ft_get_dict_str_from_file(char *filename);

// char_baord.c
int		get_char_board_line_length(char *char_board);
char	get_char_board_val(char *char_board, int row, int col);
void	set_char_board_val(char *char_board, int row, int col, char val);

// int_board.c
int		*make_int_board(int num_rows, int num_columns);
int		get_int_board_val(int *int_board, int row, int col);
void	set_int_board_val(int *int_board, int row, int col, int val);

// algorithm.c
void	set_numbers(char *char_board, int *int_board);
void	fill_square(char *char_board, int *int_board);

int	main(void)
{
	char	*rtn;
	int		*int_board;
	int		num_lines;
	char	empty;
	char	obstacle;
	char	full;

	rtn = ft_get_dict_str_from_file("internet_example_file");
	printf("%d\n", get_char_board_line_length(rtn));
	printf("%d\n", get_char_board_line_length(rtn));
	printf("%d\n", get_char_board_line_length(rtn));
	printf("%d\n", get_char_board_line_length(rtn));
	set_char_board_val(rtn, 5, 5, 'X');
	printf("%c\n", get_char_board_val(rtn, 5, 5));
	int_board = make_int_board(9, get_char_board_line_length(rtn) - 1);
	set_int_board_val(int_board, 5, 5, 42);
	printf("%d\n", get_int_board_val(int_board, 5, 5));
	printf("%c\n", rtn[0]);
	set_numbers(rtn, int_board);
	print_int_board(int_board);
	fill_square(rtn, int_board);
	printf("%s\n", rtn);
	/*
	num_lines = rtn[0] - '0';
	empty = rtn[1];
	obstacle = rtn[2];
	full = rtn[3];
	printf("%s\n", rtn);
	ft_backtrack(rtn);
	printf("%s\n", rtn);
	*/
	return (0);
}
