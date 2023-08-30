#include "ft_is_sort.c"
#include <stdio.h>
#include <assert.h>

int f(int a, int b)
{
  if (a < b)
    return -1;
  if (a == b)
    return (0);
  return (1);
}

int main(void)
{
  int test[] = {1, 2, 3, 4, 5};
  int test2[] = {5, 43, 31, 6, 100};
  int test3[] = {1, 2, 3, 2};
  int test4[] = {4, 3, 2, 1};

  printf("%d\n", ft_is_sort(test, 5, f));
  printf("%d\n", ft_is_sort(test2, 5, f));

  assert(ft_is_sort(test, 5, f) == 1);
  assert(ft_is_sort(test2, 5, f) == 0);
  assert(ft_is_sort(test3, 4, f) == 0);
  assert(ft_is_sort(test4, 4, f) == 1);
}
