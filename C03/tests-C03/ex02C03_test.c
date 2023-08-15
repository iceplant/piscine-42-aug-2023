#include "../ex02/ft_strcat.c"
#include <stdio.h>

#include <string.h>

int main(void) {
	char str1[] = "abcde";
	char str2[] = "qwert";
	ft_strcat(str2, str1);
	printf("%s", str2);


}
