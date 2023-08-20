/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:25:06 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 14:55:26 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "utils.c"
#include <stdio.h>
#include <stdlib.h>

char	*ft_get_row_from_board(char board[4][4], int row)
{
	int		i;
	char	*rtn;

	i = 0;
	rtn = (char *)malloc(4);
	while (i < 4)
	{
		rtn[i] = board[row][i];
		i++;
	}
	return (rtn);
}

char	*ft_get_column_from_board(char board[4][4], int col)
{
	int		i;
	char	*rtn;

	i = 0;
	rtn = (char *)malloc(4);
	while (i < 4)
	{
		rtn[i] = board[i][col];
		i++;
	}
	return (rtn);
}

void	ft_print_board(char board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%c ", board[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	ft_init_board_zeros(char board[4][4])
{
	board[0][0] = '0';
	board[0][1] = '0';
	board[0][2] = '0';
	board[0][3] = '0';
	board[1][0] = '0';
	board[1][1] = '0';
	board[1][2] = '0';
	board[1][3] = '0';
	board[2][0] = '0';
	board[2][1] = '0';
	board[2][2] = '0';
	board[2][3] = '0';
	board[3][0] = '0';
	board[3][1] = '0';
	board[3][2] = '0';
	board[3][3] = '0';
}

void	ft_init_board_vals(char board[4][4])
{
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[0][3] = '4';
	board[1][0] = '2';
	board[1][1] = '3';
	board[1][2] = '4';
	board[1][3] = '1';
	board[2][0] = '3';
	board[2][1] = '4';
	board[2][2] = '1';
	board[2][3] = '2';
	board[3][0] = '4';
	board[3][1] = '1';
	board[3][2] = '2';
	board[3][3] = '3';
}
