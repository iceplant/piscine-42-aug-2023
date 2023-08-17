#include "../ex04/ft_fibonacci.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_fibonacci(-42) == -1);
	assert(ft_fibonacci(0) == 0);
	assert(ft_fibonacci(1) == 1);
	assert(ft_fibonacci(2) == 1);
	assert(ft_fibonacci(42) == 267914296);
}
