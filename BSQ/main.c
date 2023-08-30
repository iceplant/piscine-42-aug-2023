/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:26:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 14:13:45 by rokamen-         ###   ########.fr       */
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
int		get_char_board_num_rows(char *char_board);
void	put_char_board(char *char_board);

// int_board.c
int		*make_int_board(int num_rows, int num_columns);
int		get_int_board_val(int *int_board, int row, int col);
void	set_int_board_val(int *int_board, int row, int col, int val);

// algorithm.c
void	set_numbers(char *char_board, int *int_board);
void	fill_square(char *char_board, int *int_board);

void	solve_file(char *filename)
{
	char	*char_board;
	int		*int_board;

	char_board = ft_get_dict_str_from_file(filename);
	int_board = make_int_board(
			get_char_board_num_rows(char_board),
			get_char_board_line_length(char_board) - 1);
	set_numbers(char_board, int_board);
	fill_square(char_board, int_board);
	put_char_board(char_board);
}

int	main(void)
{
	solve_file("internet_example_file");
	return (0);
}
