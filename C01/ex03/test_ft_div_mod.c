#include "ft_div_mod.c"
#include <stdlib.h>
#include "ft_putnbr.c"

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 11;
	b = 2;

	div = (int *) malloc(sizeof(int));
	mod = (int *) malloc(sizeof(int));
	
	ft_div_mod(a, b, div, mod);

	//ft_putnbr(a);
//	write(1, " ", 1);
//	ft_putnbr(b);
	write(1, " ", 1);
	ft_putnbr(*div);
	write(1, " ", 1);
	ft_putnbr(*mod);
}
