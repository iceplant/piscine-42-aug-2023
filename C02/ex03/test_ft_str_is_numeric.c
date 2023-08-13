#include "ft_str_is_numeric.c"
#include <stdio.h>

int main (void) {
	printf("Is c numeric: %d\n", ft_char_is_numeric('c'));
	printf("Is 1 numeric: %d\n", ft_char_is_numeric('1'));
	printf("Is abcde numeric: %d\n", ft_str_is_numeric("abcde"));
	printf("Is 123ea  numeric: %d\n", ft_str_is_numeric("123ea"));
	printf("Is 123  numeric: %d\n", ft_str_is_numeric("123"));
	
	return 0;	
}
