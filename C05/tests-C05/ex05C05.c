#include "../ex05/ft_sqrt.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	assert(ft_sqrt(4) == 2);
	assert(ft_sqrt(0) == 0);
	assert(ft_sqrt(-42) == 0); //I think this is the expected behavior?????
	assert(ft_sqrt(3) == 0);
	assert(ft_sqrt(2147395600) == 46340); //biggest square under int max
	assert(ft_sqrt(2147483647) == 0);
	//assert(ft_sqrt(-2147483648) == 0);
}

