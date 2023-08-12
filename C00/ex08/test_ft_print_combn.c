#include <stdio.h>
#include "ft_print_combn.c"
int main(void) {	
	int i = 1;
	while (i < 10) {
		printf("Testing n=%d:\n", i);
		ft_print_combn(i);
		printf("\n\n\n");
		i ++;
	}
}

