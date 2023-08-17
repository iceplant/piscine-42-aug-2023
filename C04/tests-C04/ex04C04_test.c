#include "../ex04/ft_putnbr_base.c"
#include <stdio.h>

int main(void) {
	printf("\n10 in base 'abc' should be 'bab': \n");
	ft_putnbr_base(10, "abc");
	
	printf("\n999 in base '01' should be '1111100111' \n");
	ft_putnbr_base(999, "01");

	printf("\nShould output nothing: \n");
	ft_putnbr_base(10, "");
	ft_putnbr_base(10, "0");
	ft_putnbr_base(10, "+0");
}
