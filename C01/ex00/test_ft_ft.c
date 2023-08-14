#include "ft_ft.c"
#include "ft_putnbr.c"

int main(void) {
	int i;
	i = 1;
	int *ptr;
	ptr = &i;
	ft_ft(ptr);
	ft_putnbr(*ptr);
}

