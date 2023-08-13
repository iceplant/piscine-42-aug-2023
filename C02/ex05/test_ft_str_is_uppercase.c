#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main(void) {
	printf("Is a uppercase? %d\n", ft_char_is_uppercase('a'));
	printf("Is A uppercase? %d\n", ft_char_is_uppercase('A'));

	printf("Is ABCDE uppercase? %d\n", ft_str_is_uppercase("ABCDE"));
	printf("Is aBCDe uppercase? %d\n", ft_str_is_uppercase("aBCDe"));
	printf("Is 123abCDE uppercase? %d\n", ft_str_is_uppercase("123abCDE"));
}
