/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:09:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 17:13:54 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strstrlen(char **str);
int		check_if_heights_1_through_n(char *heights, int size);
void	ft_print_board(char board[4][4]);
char	*ft_get_row_from_board(char board[4][4], int row);
char	*ft_get_column_from_board(char board[4][4], int col);
void	get_possible_rows_from_edges_helper(char **arr, char e1, char e2);
void	get_possible_rows_from_edges_helper2(char **arr, char e1, char e2);

int	ft_check_if_vals_satisfy_edges_left_to_right(char *heights, char edge1)
{
	char	max_height_so_far1;
	int		visible_count1;
	int		i1;

	max_height_so_far1 = '0';
	visible_count1 = 0;
	i1 = 0;
	while (i1 < 4)
	{
		if (heights[i1] > max_height_so_far1)
		{
			max_height_so_far1 = heights[i1];
			visible_count1++;
		}
		i1++;
	}
	return (visible_count1 == edge1 - '0');
}

int	ft_check_if_vals_satisfy_edges_right_to_left(char *heights,	char edge2)
{
	char	max_height_so_far2;
	int		visible_count2;
	int		i2;

	max_height_so_far2 = '0';
	visible_count2 = 0;
	i2 = 3;
	while (i2 >= 0)
	{
		if (heights[i2] > max_height_so_far2)
		{
			max_height_so_far2 = heights[i2];
			visible_count2++;
		}
		i2--;
	}
	return (visible_count2 == edge2 - '0');
}

int	ft_check_if_vals_satisfy_edges(char *heights, char edge1, char edge2)
{
	return (check_if_heights_1_through_n(heights, 4)
		&& ft_check_if_vals_satisfy_edges_left_to_right(heights, edge1)
		&& ft_check_if_vals_satisfy_edges_right_to_left(heights, edge2));
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
