/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:39:40 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 14:55:04 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "board.c"
#include <stdlib.h>
#include <stdio.h>

int	ft_strstrlen(char **str);


int		check_if_heights_1_through_n(char *heights, int size);
void	ft_print_board(char board[4][4]);
char	*ft_get_row_from_board(char board[4][4], int row);
char	*ft_get_column_from_board(char board[4][4], int col);



void	get_possible_rows_from_edges_helper(char **arr, char e1, char e2)
{
	if (e1 == '1' && e2 == '4')
		arr[0] = "4321";
	if (e1 == '4' && e2 == '1')
		arr[0] = "1234";
	if (e1 == '2' && e2 == '2')
	{
		arr[0] = "2143";
		arr[1] = "2413";
		arr[2] = "3142";
		arr[3] = "3412";
	}
	if (e1 == '2' && e2 == '3')
	{
		arr[0] = "1432";
		arr[1] = "2431";
		arr[2] = "3421";
	}
	if (e1 == '3' && e2 == '2')
	{
		arr[0] = "2341";
		arr[1] = "1342";
		arr[2] = "1243";
	}
}

void	get_possible_rows_from_edges_helper2(char **arr, char e1, char e2)
{
	if (e1 == '1' && e2 == '2')
	{
		arr[0] = "4123";
		arr[1] = "4213";
	}
	if (e1 == '2' && e2 == '1')
	{
		arr[0] = "3214";
		arr[1] = "3124";
	}
	if (e1 == '1' && e2 == '3')
	{
		arr[0] = "4231";
		arr[1] = "4132";
		arr[2] = "4312";
	}
	if (e1 == '3' && e2 == '1')
	{
		arr[0] = "1324";
		arr[1] = "2314";
		arr[2] = "2134";
	}
}

// make this shorter? implement some kind of db?
// idea: for e1 > e2 call the function backwards and reverse
char	**get_possible_rows_from_edges(char e1, char e2)
{
	char	**arr;

	arr = (char **) malloc(4 * sizeof(char *));
	get_possible_rows_from_edges_helper(arr, e1, e2);
	get_possible_rows_from_edges_helper2(arr, e1, e2);
	return (arr);
}

int	ft_check_if_vals_satisfy_edges(char *heights, char edge1, char edge2)
{
	char	max_height_so_far1;
	char	max_height_so_far2;
	int		visible_count1;
	int		visible_count2;
	int		i1;
	int		i2;

	max_height_so_far1 = '0';
	max_height_so_far2 = '0';
	visible_count1 = 0;
	visible_count2 = 0;
	i1 = 0;
	i2 = 3;
	while (i1 < 4)
	{
		if (heights[i1] > max_height_so_far1)
		{
			max_height_so_far1 = heights[i1];
			visible_count1++;
		}
		i1++;
	}
	while (i2 >= 0)
	{
		if (heights[i2] > max_height_so_far2)
		{
			max_height_so_far2 = heights[i2];
			visible_count2++;
		}
		i2--;
	}
	return ((check_if_heights_1_through_n(heights, 4) && visible_count1 == edge1
			- '0') && (visible_count2 == edge2 - '0'));
}

int	ft_is_board_correct(char board[4][4], char *edges, int board_dimension)
{
	int	row;
	int	column;

	row = 0;
	while (row < board_dimension)
	{
		if (!ft_check_if_vals_satisfy_edges(ft_get_row_from_board(board, row),
				edges[8 + row], edges[12 + row]))
		{
			printf("row: %d\n", row);
			return (0);
		}
		row++;
	}
	column = 0;
	while (column < board_dimension)
	{
		if (!ft_check_if_vals_satisfy_edges(ft_get_column_from_board(board,
					column), edges[0 + column], edges[4 + column]))
		{
			return (0);
		}
		column++;
	}
	return (1);
}

// returns 1 if a solution was found, 0 if not
int	ft_solve(char board[4][4], char *edges, int rows_filled,
		int board_dimension)
{
	int		rtn;
	char	edge1;
	char	edge2;
	char	**rows;
	int		num_rows_for_edges;
	int		i;
	int		j;

	if (rows_filled == 4)
	{
		if (ft_is_board_correct(board, edges, board_dimension))
		{
			ft_print_board(board);
			return (1);
		}
		else
			return (0);
	}
	else
	{
		edge1 = edges[8 + rows_filled];
		edge2 = edges[12 + rows_filled];
		rows = get_possible_rows_from_edges(edge1, edge2);
		num_rows_for_edges = ft_strstrlen(rows);
		i = 0;
		ft_print_board(board);
		printf("possible row: %s\n", rows[0]);
		printf("edge1: %c edge2: %c num_rows: %i\n", edge1, edge2,
			num_rows_for_edges);
		while (i < num_rows_for_edges)
		{
			j = 0;
			while (j < 4)
			{
				board[rows_filled][j] = rows[i][j];
				j++;
			}
			rtn = ft_solve(board, edges, rows_filled + 1, board_dimension);
			if (rtn)
				return (rtn);
			i++;
		}
	}
	return (0);
}
