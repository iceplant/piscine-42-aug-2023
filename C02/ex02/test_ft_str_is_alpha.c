#include "ft_str_is_alpha.c"
#include <stdio.h>

int main(void) {
	printf("Is abcde alpha? %d\n", ft_str_is_alpha("abcde"));
	printf("Is 123ra alpha? %d", ft_str_is_alpha("123ra"));
	
}
