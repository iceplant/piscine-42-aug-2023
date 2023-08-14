#include <stdio.h>
#include "ft_strlen.c"

void test_len2(void) {
	char s[3] = {'1', '2', '3'};
	char *ptr = s;
	int l = ft_strlen(s);
	printf("\n%s is %d chars long\n", s, l);
}

void test_len3(void) {
	char * s = "123";
	char *ptr = s;  
	int l = ft_strlen(s);
	printf("\n%s is %d chars long\n", s, l); 

}

int main(void) {
	test_len2();
	test_len3();
}
	


