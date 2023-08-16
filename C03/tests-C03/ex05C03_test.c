#include "../ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char *s1 = "qwertyqwerty";
	char *s2 = "abcde";

	char *buf = (char*)malloc(sizeof(char)*2000);
	strlcat(buf, s2, 20);
	printf("%s", buf);
}
