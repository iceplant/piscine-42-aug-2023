#include <stdio.h>
#include "rush.c"
// only works for signle digit ints!
void eval_vals(int x, int y) {
	printf("rush(%d,%d): \n", x, y);
	rush(x, y);
}

int	main(void)
{
	eval_vals(5,3);
	eval_vals(5,1);
	eval_vals(1,1);
	eval_vals(1,5);
	eval_vals(4,4);
	eval_vals(0,0);
	eval_vals(0,1);
	eval_vals(1,0);
}
