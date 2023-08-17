#include "../ex06/ft_is_prime.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_is_prime(0) == 0);
	assert(ft_is_prime(1) == 0);
	assert(ft_is_prime(2) == 1);
	assert(ft_is_prime(3) == 1);
	assert(ft_is_prime(42) == 0);
	assert(ft_is_prime(7919) == 1);
	assert(ft_is_prime(-1) == 0);
	assert(ft_is_prime(-2) == 1);
	assert(ft_is_prime(-3) == 1);
	assert(ft_is_prime(-42) == 0);
	assert(ft_is_prime(-7919) == 1);	
}
