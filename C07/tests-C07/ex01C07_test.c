#include "../ex01/ft_range.c"
#include <stdio.h>

void ft_print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}

int main(void)
{
	int test[3] = {1, 2, 3};
	ft_print_arr(test, 3);

	int *test_range = ft_range(1,10);
	ft_print_arr(test_range, 9);

	int *test_range2 = ft_range(-100,-89);
	ft_print_arr(test_range2, 11);
}
