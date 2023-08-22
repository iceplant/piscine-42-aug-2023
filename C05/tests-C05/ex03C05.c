#include "../ex03/ft_recursive_power.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_recursive_power(-42, 0) == 1);
	assert(ft_recursive_power(0, -42) == 0);
	assert(ft_recursive_power(0,0) == 1);
	assert(ft_recursive_power(3,2) == 9);
	assert(ft_recursive_power(-42,4) == 3111696);
	assert(ft_recursive_power(42, 4) == 3111696 );
}
