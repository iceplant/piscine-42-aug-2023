#include "../ex05/ft_atoi_base.c"
#include <stdio.h>

int main(void) {
	printf("%d\n", ft_check_base("0123456789"));
	printf("char %c with base %s converts to %d\n", 'f', "0123456789abcdef", ft_char_to_val('f', "0123456789abcdef"));
	ft_atoi_base("   +++-+-+-12345", "0123456789");
}
