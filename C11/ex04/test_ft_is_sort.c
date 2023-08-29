#include "ft_is_sort.c"
#include <stdio.h>

int f (int a, int b)
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
	printf("%d\n", ft_is_sort(test, 5, f));
	printf("%d\n", ft_is_sort(test2, 5, f));
}