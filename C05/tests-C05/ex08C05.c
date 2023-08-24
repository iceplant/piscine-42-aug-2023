#include "../ex08/ft_ten_queens_puzzle2.c"
#include <assert.h>

int main(void)
{
  // int board[10][10];
  // zero_board(board);
  // assert(ft_is_valid(board));
  // board[0][0] = 1;
  // assert(ft_is_valid(board));
  // board[1][1] = 1;
  // assert(!ft_is_valid(board));
  // board[1][1] = 0;
  // board[1][0] = 1;
  // assert(!ft_is_valid(board));
  // board[1][0] = 0;
  // board[0][1] = 1;
  // assert(!ft_is_valid(board));

  assert(!is_new_char_valid("11", 1));
  printf("13 %d\n", is_new_char_valid("13", 1));
  assert(is_new_char_valid("13", 1));
  assert(!is_new_char_valid("10000001", 7));
  assert(is_new_char_valid("0247", 4));
  ft_ten_queens_puzzle();
}