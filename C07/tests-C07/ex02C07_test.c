#include "../ex02/ft_ultimate_range.c"
#include "utils.c"

int main(void)
{
	int n;
	int *test = malloc(sizeof(int *));
	n = ft_ultimate_range(&test, 0, 10);
	ft_print_arr(test, 10);
	assert(n == 10);

	ft_ultimate_range(&test, 0, 1);
	ft_print_arr(test, 1);

	n  = ft_ultimate_range(&test, 11, 10);
	assert(n == 0);
}

