#include "ft_strupcase.c"
#include <stdio.h>

int main(void) {
	char str[] = "abasdgaAAAGDScde123";
	printf("Make %s upper case: ", str);
	printf("%s\n", ft_strupcase(str));
}
