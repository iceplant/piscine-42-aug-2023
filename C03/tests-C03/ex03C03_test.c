#include "../ex03/ft_strncat.c"
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char str1A[] = "abcde";
	char str2A[] = "qwert";

	char str1B[] = "abcde";
	char str2B[] = "qwert";

	ft_strncat(str2A, str1A, 3);
	//strncat(str2B, str1B, 3); //why is this an illegal hardwre instruction? 
	printf("%s", str2A);
	//assert(str2B == str2A);
	//
	
	char *a = "abc\0";
    char *b = "def";


    char *buf = (char*)malloc(sizeof(char)*2000);
    buf[0] = 'd';
    buf[1] = 'e';
    buf[2] = 'f';
    buf[3] = '\0';
    strncat(buf, a,4);
    printf("\n%s", buf);
}
