#include "../ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_find_next_prime(0) == 2);
	assert(ft_find_next_prime(1) == 2);
	assert(ft_find_next_prime(54890) == 54907);
	assert(ft_find_next_prime(2147483630) == 0);
	assert(ft_find_next_prime(2147483628) == 2147483629);
}	
