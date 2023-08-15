#include "ft_strlowcase.c"
#include <stdio.h>

void test(char *str){
	printf("%s to lower case is: ", str);
   	printf("%s\n", ft_strlowcase(str));	}

int main(void) {
	char arr[] ="aAbBcCde12531AAABDFGDSgfadfgha$&#^!@&%(^)#@a"; 
	test(arr);
}
