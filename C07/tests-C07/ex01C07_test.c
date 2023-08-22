#include "../ex01/ft_range.c"
#include <stdio.h>
#include "utils.c"

int main(void)
{
	int test[3] = {1, 2, 3};
	ft_print_arr(test, 3);

	int *test_range = ft_range(1,10);
	ft_print_arr(test_range, 9);

	int *test_range2 = ft_range(-100,-89);
	ft_print_arr(test_range2, 11);

	int *test_range3 = ft_range(10,0);
	assert(test_range3 == NULL);
}
