/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:40 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 19:39:17 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int		ft_strstrlen(char **str);
int		check_if_heights_1_through_n(char *heights, int size);
void	ft_print_board(char board[4][4]);
char	*ft_get_row_from_board(char board[4][4], int row);
char	*ft_get_column_from_board(char board[4][4], int col);
void	get_possible_rows_from_edges_helper(char **arr, char e1, char e2);
void	get_possible_rows_from_edges_helper2(char **arr, char e1, char e2);

int		ft_is_board_correct(char board[4][4], char *edges, int board_dimension);
int		ft_check_if_vals_satisfy_edges_left_to_right(char *heights, char edge1,
			char edge2);
int		ft_check_if_vals_satisfy_edges_right_to_left(char *heights, char edge1,
			char edge2);
int		ft_check_if_vals_satisfy_edges(char *heights, char edge1, char edge2);

char	**get_possible_rows_from_edges(char e1, char e2);

/**
void	ft_print_debugger(char board[4][4], char *edges, char **rows,
		int rows_filled)
{
	int	edge1;
	int	edge2;
	int	num_rows_for_edges;

	num_rows_for_edges = ft_strstrlen(rows);
	edge1 = edges[8 + rows_filled];
	edge2 = edges[12 + rows_filled];
	ft_print_board(board);
	printf("possible row: %s\n", rows[0]);
	printf("edge1: %c edge2: %c num_rows: %i\n", edge1, edge2,
		num_rows_for_edges);
} */
int	ft_handle_rows_filled(char board[4][4], char *edges, int board_dimension)
{
	if (ft_is_board_correct(board, edges, board_dimension))
	{
		ft_print_board(board);
		return (1);
	}
	return (0);
}

// edge1 = edges[8 + rows_filled];
// edge2 = edges[12 + rows_filled];
// num_rows_for_edges = ft_strstrlen(rows);
// returns 1 if a solution was found, 0 if not
// rows_filled => r to save space
int	ft_solve(char board[4][4], char *edges, int r,
		int board_dimension)
{
	int		rtn;
	char	**rows;
	int		i;
	int		j;
	int		num_rows_for_edges;

	if (r == 4)
		return (ft_handle_rows_filled(board, edges, board_dimension));
	rows = get_possible_rows_from_edges(edges[8 + r], edges[12 + r]);
	i = 0;
	num_rows_for_edges = ft_strstrlen(rows);
	while (i < num_rows_for_edges)
	{
		j = 0;
		while (j < 4)
		{
			board[r][j] = rows[i][j];
			j++;
		}
		rtn = ft_solve(board, edges, r + 1, board_dimension);
		if (rtn)
			return (rtn);
		i++;
	}
	return (0);
}
