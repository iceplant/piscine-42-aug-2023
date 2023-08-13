#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main(void) {
	printf("Is abcde lowercase? %d\n", ft_str_is_lowercase("abcde"));
	printf("Is abc123 lowercase? %d\n", ft_str_is_lowercase("abc123"));
	printf("Is 123 lowercase? %d\n", ft_str_is_lowercase("123"));
}
