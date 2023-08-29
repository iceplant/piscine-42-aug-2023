#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "file.c"

int ft_get_board_line_lenth(char *board)
{
  int i;

  i = 5;
  while (board[i] != '\n')
    i++;
  return (i - 4);
}

char ft_choose_new_value(char *board, char up, char left, char upleft)
{
  char obstacle = board[2];
  if (up == obstacle || left == obstacle || upleft == obstacle)
    return '1';
  // return min(up, left, upleft);
  char rtn = up;
  if (left < rtn)
    rtn = left;
  if (upleft < rtn)
    rtn = upleft;
  return (rtn + 1);
}

void update_board_position(char *board, int row, int column)
{
  char obstacle = board[2];
  int line_length = ft_get_board_line_lenth(board);
  int position = 5 + (row * line_length) + column;
  char up;
  char left;
  char upleft;
  if (board[position] == obstacle)
    return;
  if (row == 0 || column == 0)
    board[position] = '1';
  else
  {
    up = board[5 + ((row - 1) * line_length) + column];
    left = board[5 + (row * line_length) + column - 1];
    upleft = board[5 + ((row - 1) * line_length) + column - 1];
    board[position] = ft_choose_new_value(board, up, left, upleft);
  }
}

// handle case where empty, obstacle, or full are digits
void ft_backtrack(char *board)
{
  int num_lines = board[0] - '0';
  char empty = board[1];
  char obstacle = board[2];
  char full = board[3];
  int line_length = ft_get_board_line_lenth(board);

  printf("line length: %d\n", line_length);

  int i = 0;
  while (board[i])
  {
    printf("%d:%c ", i, board[i]);
    i++;
  }

  int row = 0;
  int column;
  while (row < num_lines)
  {
    column = 0;
    while (column < line_length - 1) // need - 1 to avoid overwriting the last element of each line which is \n
    {
      // board[5 + (row * line_length) + column] = column + '0';
      update_board_position(board, row, column);

      column++;
    }
    row++;
  }
}

void fill_square(char *board)
{
	int i = 5;
	int so_far = 0;
	int i_so_far;
	int line_length = ft_get_board_line_lenth(board);
	while (board[i])
	{
		if (board[i] >= '0' && board[i] <= '9' && board[i] - '0' > so_far)
		{
			so_far = board[i] - '0';
			i_so_far = i;
		}
		i++;
	}
	printf("so far: %d, i: %d", so_far, i_so_far);
	i = 0;
   	int j;	
	
	while (i < so_far)
	{
	   j = 0;
		while (j < so_far)
		{
			board[i_so_far - j - (i * line_length)] = 'X';
			j++;
		}
		i++;
	}
}

void clear_numbers(char *board)
{
	board += 5;
	while (*board)
	{
		if (*board != 'o' && *board != 'X' && *board != '\n')
			*board = '.';
		board++;
	}
}



int main(void)
{
  char *rtn = ft_get_dict_str_from_file("internet_example_file");

  int num_lines = rtn[0] - '0';
  char empty = rtn[1];
  char obstacle = rtn[2];
  char full = rtn[3];

  printf("%s\n", rtn);

  ft_backtrack(rtn);

  printf("%s\n", rtn);

fill_square(rtn);

printf("%s\n", rtn);

clear_numbers(rtn);

printf("%s\n", rtn);


  return (0);
}
