#include "ft_putstr_non_printable.c"
#include <stdio.h>

int main() {
	//char c = '\n';
	//printf("\n\\n hex code is written as: ");
	//ft_write_char_hex_code(c);	

    // Write C code here
	char str2[] = "Coucou\ntu vas bien ?";
    char str1[] = "\x01\x07 Hello world! \x01\x05\x0a\x15";
    // ft_putstr_non_printable("Hello world!\n");
    
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
    return 0;
}
