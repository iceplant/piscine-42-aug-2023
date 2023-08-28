#include "../ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <assert.h>

int main(void) {

	int int_max = 2147483647;

	assert(ft_find_next_prime(-1000) == 2);
	assert(ft_find_next_prime(0) == 2);
	assert(ft_find_next_prime(1) == 2);
	assert(ft_find_next_prime(54890) == 54907);
	assert(ft_find_next_prime(2147483628) == 2147483629);
	assert(ft_find_next_prime(int_max - 1) == int_max);
	assert(ft_find_next_prime(int_max - 10) == int_max);
}	
