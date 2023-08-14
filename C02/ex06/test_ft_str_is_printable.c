#include "ft_str_is_printable.c"
#include <stdio.h>

int main(void) {
	char c = 50;
	printf("Char with code %d prints as %c\n", c, c);

	c = 5;
	printf("Is char %c with ASCII code %d printable? %d\n", c, c,ft_char_is_printable(c)); 
	c = 40;
	printf("Is char %c with ASCII code %d printable? %d\n", c, c,ft_char_is_printable(c)); 
	
	

	char str1[] = "\x01\x05\x0a\x15";
	printf("Is abc123ABC!@# printable? %d\n", ft_str_is_printable("abc123ABC!@#"));
	printf("Is %s printable? %d\n", str1, ft_str_is_printable(str1));	
	return (0);
}
