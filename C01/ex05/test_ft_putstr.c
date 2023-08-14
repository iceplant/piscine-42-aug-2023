#include "ft_putstr.c"
//#include "../ex06/ft_strlen.c"
#include <stdio.h>

void test_ft_strlen(void) {
	char * str;
   	str	= "Seize the means!";
	int l = ft_strlen(str);
	printf("%d", l);
}

void test1(void){
	char str[] = "Seize the means!";
	char *ptr = str;
	ft_putstr(ptr);	
}

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




int main(void){
	test1();
	//test_ft_strlen();
	//test_len2();
	//test_len3();
}

