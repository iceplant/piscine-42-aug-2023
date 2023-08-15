#include "../ex05/ft_strlcat.c"
#include <stdio.h>

int main(void) {
	char *s1 = "qwertyqwerty";
	char *s2 = "abcde";
	ft_strlcat(s1, s2, 10);
	printf("%s", s1);
}
