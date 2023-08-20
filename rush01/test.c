#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strstrlen(char **str)
{
  int i;
  i = 0;
  while (str[i] != NULL)
  {
    i++;
  }
  return (i);
}

// make this shorter
char **get_possible_rows_from_edges(char e1, char e2)
{

  char **arr = (char **)malloc(4 * sizeof(char *));

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
  }
  if (e1 == '3' && e2 == '1')
  {
    arr[0] = "1324";
    arr[1] = "2314";
  }
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
  return arr;
}

void ft_print_board(char board[4][4])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
}

char *ft_get_row_from_board(char board[4][4], int row)
{
  int i = 0;
  char *rtn = (char *)malloc(4);
  while (i < 4)
  {
    rtn[i] = board[row][i];
    i++;
  }
  return rtn;
}

char *ft_get_column_from_board(char board[4][4], int col)
{
  int i = 0;
  char *rtn = (char *)malloc(4);
  while (i < 4)
  {
    rtn[i] = board[i][col];
    i++;
  }
  return rtn;
}

int check_if_heights_1_through_n(char *heights, int size)
{
	int values_seen_so_far[10];
	//set all array elements to 0
	int i = 0;
	while (i < 10)
	{
		values_seen_so_far	[i] = 0;
		i++;
	}
	//iterate through height and set corresponding indeces in arr to 1 to show we have seen that element
	i = 0;
	while (i < size)
	{
	    //printf("height %c, height as an int %d\n", heights[i], heights[i] - '0');
		values_seen_so_far[heights[i] - '0'] = 1;
		i++;
	}
	//itterate through arr again, and see if we're missinng any values:
	//		remember: array has indices 0-9 but we only want 1-4
	//		return 0 (false) if we are missing values, return 1 (true) if not
	i = 1;
	while (i <= size)
	{
		if (values_seen_so_far[i] != 1)
			return 0;
		i++;
	}
	return 1;
}

int ft_check_if_vals_satisfy_edges(char *heights, char edge1, char edge2)
{
  char max_height_so_far1 = '0';
  char max_height_so_far2 = '0';
  int visible_count1 = 0;
  int visible_count2 = 0;
  int i1 = 0;
  int i2 = 3;
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

  return (check_if_heights_1_through_n(heights, 4) && visible_count1 == edge1 - '0') && (visible_count2 == edge2 - '0');
}

int ft_is_board_correct(char board[4][4], char *edges, int board_dimension)
{
  int row;
  int column;

  row = 0;
  while (row < board_dimension)
  {

    if (!ft_check_if_vals_satisfy_edges(
            ft_get_row_from_board(board, row),
            edges[8 + row], edges[12 + row]))
    {
      printf("row: %d\n", row);
      return 0;
    }
    row++;
  }
  column = 0;

  while (column < board_dimension)
  {
    if (!ft_check_if_vals_satisfy_edges(ft_get_column_from_board(board, column), edges[0 + column], edges[4 + column]))
    {
      printf("reached 2\n");
      return (0);
    }
    column++;
  }
  return (1);
}

// returns 1 if a solution was found, 0 if not
int ft_solve(char board[4][4], char *edges, int rows_filled, int board_dimension)
{
  int rtn;
  if (rows_filled == 4)
  {
    if (ft_is_board_correct(board, edges, board_dimension))
    {
      ft_print_board(board);
      return 1; // solution was found
    }
    else
      return 0; // solution was not found
  }
  else
  {
    char edge1 = edges[8 + rows_filled];
    char edge2 = edges[12 + rows_filled];
    char **rows = get_possible_rows_from_edges(edge1, edge2);
    int num_rows_for_edges = ft_strstrlen(rows);
    int i = 0;

    printf("possible row: %s\n", rows[0]);
    printf("edge1: %c edge2: %c num_rows: %i\n", edge1, edge2, num_rows_for_edges);

    while (i < num_rows_for_edges)
    {
      // fill board with ith possibility for rows_filled + 1 edge
      int j = 0;
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

void ft_init_board(char board[4][4])
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

  /*
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
  */
}

int main(int argc, char **argv)
{
  // printf("%s\n", argv[0]);
  // printf("%s\n", argv[1]);

  char edges[16];
  int arg_index = 0;
  int edge_index = 0;
  if (argc == 1)
    return (0);
  while (argv[1][arg_index] != '\0')
  {
    if (argv[1][arg_index] != ' ')
    {
      edges[edge_index] = argv[1][arg_index];
      edge_index++;
    }
    arg_index++;
  }

  char board[4][4];

  ft_init_board(board);

  // ft_print_board(board);

  // printf("row: %s\n", ft_get_row_from_board(board, 0));

  // char *vals = ft_get_row_from_board(board, 0);

  // printf("result: %d\n", ft_check_if_vals_satisfy_edges(vals, '4', '1'));

  // printf("is board correct: %d\n", ft_is_board_correct(board, edges, 4));

  // print row

  // ft_get_column_from_board(board);

  if (ft_solve(board, edges, 0, 4) == 0)
	  write(1, "Error\n", 6);
}
