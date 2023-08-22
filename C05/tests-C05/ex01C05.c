#include "../ex01/ft_recursive_factorial.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_recursive_factorial(-42) == 0);
	assert(ft_recursive_factorial(0) == 1);
	assert(ft_recursive_factorial(1) == 1);
	assert(ft_recursive_factorial(10) == 3628800);
	printf("%d\n", ft_recursive_factorial(100)); //this should overflow but not break I think?
}
