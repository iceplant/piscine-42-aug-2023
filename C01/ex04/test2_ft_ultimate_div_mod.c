#include <stdio.h>	
#include "ft_ultimate_div_mod.c"
#include <stdlib.h>

int main(void){
	printf("\nTEST 2: \n");

	int *a;
	int *b;

	a = (int *) malloc(sizeof(int)); 
	b = (int *) malloc(sizeof(int)); 

	*a = 11;
	*b = 2;

	ft_ultimate_div_mod(a, b);

	printf("a: %d\n", *a);
	printf("b: %d\n", *b);
}
