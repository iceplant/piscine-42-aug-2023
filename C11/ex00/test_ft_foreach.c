#include "ft_foreach.c"
#include <stdio.h>

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int main(void)
{
	int test[] = {1, 2, 3};
	ft_foreach(test, 3, &ft_putnbr);
}
