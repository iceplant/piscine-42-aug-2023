/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:31:00 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 22:19:54 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_display_solution_from_board(int board[10][10])
{
  int i;
  int j;
  char c;

  i = 0;
  while (i < 10)
  {
    j = 0;
    while (j < 10)
    {
      if (board[i][j] == 1)
      {
        c = '0' + j;
        write(1, &c, 1);
      }
      j++;
    }
    i++;
  }
  write(1, "\n", 1);
}

void ft_display_board(int board[10][10])
{
  int i = 0;
  int j;
  while (i < 10)
  {
    j = 0;
    while (j < 10)
    {
      printf("%d", board[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\n");
}

void zero_board(int board[10][10])
{
  int i = 0;
  int j;
  while (i < 10)
  {
    j = 0;
    while (j < 10)
    {
      board[i][j] = 0;
      j++;
    }
    i++;
  }
}

void board_config_1(int board[10][10])
{
  int i = 0;
  int j;
  while (i < 10)
  {
    j = 0;
    while (j < 10)
    {
      if (i == j)
        board[i][j] = 1;
      j++;
    }
    i++;
  }
}

int ft_is_valid_diagonals(int board[10][10])
{
  // printf("reached diagonals\n");
  int i;
  int j;
  int sum1;
  int sum2;
  i = 0;
  while (i < 10)
  {
    j = 0;
    sum1 = 0;
    sum2 = 0;
    while (i + j < 10)
    {
      // printf("i: %d, j: %d\n", i, j);
      sum1 += board[j][i + j];
      sum2 += board[i + j][j];
      j++;
    }
    if (sum1 > 1 || sum2 > 1)
      return 0;
    sum1 = 0;
    sum2 = 0;
    while (i + j < 10)
    {
      // printf("i: %d, j: %d\n", i, j);
      sum1 += board[10 - i - j][j];
      sum2 += board[10 - j][j + i];
    }
    if (sum1 > 1 || sum2 > 1)
      return (0);
    i++;
  }
  return (1);
}

// TODO: add diagonals
int ft_is_valid(int board[10][10])
{
  int x;
  int y;
  int seen;

  x = 0;
  // cols
  while (x < 10)
  {
    y = 0;
    seen = 0;
    while (y < 10)
    {
      if (board[x][y])
      {
        if (seen)
          return 0;
        seen = 1;
      }
      y++;
    }
    x++;
  }
  y = 0;
  // rows
  while (y < 10)
  {
    x = 0;
    seen = 0;
    while (x < 10)
    {
      if (board[x][y])
      {
        if (seen)
          return 0;
        seen = 1;
      }
      x++;
    }
    y++;
  }

  // alternative approach: sum diagonal/row/col and see if it adds to more than 1
  // x+y = 0 through 18 =>

  return (ft_is_valid_diagonals(board));
}

// void ft_set_attack_field(int board[10][10], int x, int y) {
// 	int i = 0;
// 	while (x+i < 10) {
// 		if (y+i < 10)
// 			board[x+i][y+i] = 1;
// 		board[x+i][y] = 1;
// 		if (y-i < 10)
// 			board[x+i][y-i] = 1;

int ft_ten_queens_puzzle_helper(int board[10][10], int col)
{
  int x = col;
  int y = 0;
  int count = 0;
  if (!ft_is_valid(board))
  {
    // printf("found invalid board\n");
    // ft_display_board(board);
    return 0;
  }
  if (col == 10)
  {
    // ft_display_board(board);
    ft_display_solution_from_board(board);
    return 1;
  }
  while (y < 10)
  {
    board[x][y] = 1;
    if (ft_ten_queens_puzzle_helper(board, col + 1))
    {
      // ft_display_board(board);
      count++;
    }
    board[x][y] = 0;
    y++;
  }
  return count;
}

// 2 = queen, 1 = queen's path
int ft_ten_queens_puzzle(void)
{
  int board[10][10];
  zero_board(board);
  ft_display_board(board);
  return (ft_ten_queens_puzzle_helper(board, 0));
}

// int main(void)
// {
//   ft_ten_queens_puzzle();
//   return (0);
// }
