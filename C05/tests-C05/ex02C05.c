#include "../ex02/ft_iterative_power.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_iterative_power(0, -1) == 0);
	assert(ft_iterative_power(0, 0) == 1);
	assert(ft_iterative_power(1,0) == 1);
	assert(ft_iterative_power(5,-1) == 0);
	assert(ft_iterative_power(1, 0) == 1);
	assert(ft_iterative_power(2,4) == 16);
	assert(ft_iterative_power(5, 2) == 25);
}
