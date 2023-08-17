#include "ft_putnbr.c"

int	main(void)
{
	int	int_min;
	int	int_max;

	int_min = -2147483648;
	int_max = 2147483647;

	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(int_min);
	write(1, "\n", 1);
	ft_putnbr(int_max);
	return (0);
}
