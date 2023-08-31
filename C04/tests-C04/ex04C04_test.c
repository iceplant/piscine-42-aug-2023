#include "../ex04/ft_putnbr_base.c"
#include <stdio.h>

const static int g_int_min = -2147483648;

int main(void) {

		

	printf("\n10 in base 'abc' should be 'bab': \n");
	ft_putnbr_base(10, "abc");
	
	printf("\n999 in base '01' should be '1111100111' \n");
	ft_putnbr_base(999, "01"); 

	printf("\nShould output nothing: \n");
	ft_putnbr_base(10, "");
	//printf("1\n");
	ft_putnbr_base(10, "0");
	//printf("2\n");
	ft_putnbr_base(10, "+0");
	printf("Finished block that should output nothing\n");

	
	//printf("more tests: ");
	ft_putnbr_base(-12, "01");
	//printf("\n");
	ft_putnbr_base(40, "poneyvif");
	//printf("\n");
	ft_putnbr_base(894868, "0123456789");
	//printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");

	//printf("\n");
	ft_putnbr_base(g_int_min, "01");
	//printf("\n");
	printf("g min: %d\n", g_int_min);
	ft_putnbr_base(g_int_min, "0123456789");
	//printf("\n");
	ft_putnbr_base(g_int_min, "0123456789abcdef");
	//printf("\n");
	ft_putnbr_base(-56789, "0123456789"); 

	ft_putnbr_base(g_int_min, "0123456789"); 
	
}
