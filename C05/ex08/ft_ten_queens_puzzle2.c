#include <stdio.h>

int is_new_char_valid(char *sol, int position)
{
  int i = 0;
  int dx;
  int dy;
  while (i < position)
  {
    dx = position - i;
    dy = sol[position] - sol[i];
    if (dy == 0 || dy == dx || dy == (-1 * dx))
      return 0;
    i++;
  }
  return 1;
}

// position = where we will try adding a new value
int ft_ten_queens_puzzle_helper(char sol[10], int position)
{
  int i = 0;
  int sol_count = 0;

  if (position == 10)
  {
    printf("%s\n", sol);
    return 1;
  }
  while (i < 10)
  {
    sol[position] = i + '0';
    if (is_new_char_valid(sol, position))
      sol_count += ft_ten_queens_puzzle_helper(sol, position + 1);
    // sol[i] = '-';
    i++;
  }
  return (sol_count);
}

int ft_ten_queens_puzzle(void)
{
  char sol[10];
  int i;
  i = 0;
  while (i < 10)
  {
    sol[i] = '-';
    i++;
  }
  int rtn = ft_ten_queens_puzzle_helper(sol, 0);
  printf("%d\n", rtn);
}