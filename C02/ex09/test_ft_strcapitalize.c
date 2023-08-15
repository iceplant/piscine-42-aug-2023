#include "ft_strcapitalize.c"
#include <stdio.h>


int main(void) {
	char str[] = "the quick \\brown+fox!jumped-over the la a a a zyyyyy dawwwg! HERE Is Some Already CapitaliZED STRUFFZZ!23451ASDSGS124asdfaa23";
	printf("Capitalizing \n%s \n", str);
	printf("%s", ft_strcapitalize(str));

	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Capitalizing \n%s \n", str2);
	printf("%s", ft_strcapitalize(str2));
	return (0);
}
