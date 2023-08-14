#include "ft_strcapitalize.c"
#include <stdio.h>


int main(void) {
	char str[] = "the quick brown+fox!jumped-over the la a a a zyyyyy dawwwg!";
	printf("Capitalizing %s: ", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
