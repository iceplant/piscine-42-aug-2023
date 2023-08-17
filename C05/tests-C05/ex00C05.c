#include "../ex00/ft_iterative_factorial.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_iterative_factorial(-42) == 0);
	assert(ft_iterative_factorial(0) == 1);
	assert(ft_iterative_factorial(1) == 1);
	assert(ft_iterative_factorial(10) == 3628800);
}
