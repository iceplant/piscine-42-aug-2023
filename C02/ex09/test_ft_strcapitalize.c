#include "ft_strcapitalize.c"
#include <stdio.h>


int main(void) {
	char str[] = "the quick \\brown+fox!jumped-over the la a a a zyyyyy dawwwg! HERE Is Some Already CapitaliZED STRUFFZZ!23451ASDSGS124asdfaa23";
	printf("Capitalizing \n%s \n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
