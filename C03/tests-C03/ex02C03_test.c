#include "../ex02/ft_strcat.c"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void) {
	char str1[] = "abcde";
	char str2[] = "qwert";
	ft_strcat(str2, str1);
	assert(strcmp(str2, "qwertabcde") == 0);
	//printf("%s", str2);


}
