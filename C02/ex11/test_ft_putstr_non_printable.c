#include "ft_putstr_non_printable.c"
#include <stdio.h>

int main() {
    // Write C code here
    char str1[] = "\x01\x05\x0a\x15";
    // ft_putstr_non_printable("Hello world!\n");
    ft_putstr_non_printable(str1);
    return 0;
}
