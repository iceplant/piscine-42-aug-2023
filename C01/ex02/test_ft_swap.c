#include <unistd.h>
#include "ft_swap.c"
#include "ft_putnbr.c"

int main(void) {
	int a = 42;
	int b = 24;
	int *ptra;
	int *ptrb;
	ptra = &a;
	ptrb = &b;
	write(1, "initially a: ",11);
	ft_putnbr(*ptra);
	write(1, "b: ", 3);
	ft_putnbr(*ptrb);

	ft_swap(ptra, ptrb);
	
	write(1, "final a: ",7);
   	ft_putnbr(*ptra);
	write(1, "b: ", 3);
	ft_putnbr(*ptrb);
}

