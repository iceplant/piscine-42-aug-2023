#include "ft_strncpy.c"
#include <stdio.h>
#include <stdlib.h>

//declaring a string array as dest
void test1(void) {
	char *src = "abcde";
	char dest[] = "zywse"; //THIS IS DIFFERENT THAN DEFINING A STRING!!!!
	printf("\n\n\nTest 1: \n");
	printf("Before: \ndest: %s, src: %s, n=5\n", dest, src);
	ft_strncpy(dest, src, 5);
	printf("After: \ndest: %s, src: %s", dest, src);
}

//declaring a string array as dest
void test2(void) {
	char *src = "abcde";
	char dest[] = "zywse"; //THIS IS DIFFERENT THAN DEFINING A STRING!!!!
	printf("\n\n\nTest 2: \n");
	printf("Before: \ndest: %s, src: %s, n=3\n", dest, src);
	ft_strncpy(dest, src, 3u);
	printf("After: \ndest: %s, src: %s", dest, src);
}

//declaring a string array as dest
void test3(void) {
	char *src = "abcde";
	char dest[] = "zywse"; //THIS IS DIFFERENT THAN DEFINING A STRING!!!!
	printf("\n\n\nTest 3: \n");
	printf("Before: \ndest: %s, src: %s, n=0\n", dest, src);
	ft_strncpy(dest, src, 0u);
	printf("After: \ndest: %s, src: %s", dest, src);
}


// with malloc
void test4(void) {
	char *src = "abcde";
	char *dest = (char *) malloc(5);
	printf("\n\n\nTest 4: \n");
	printf("Before: \ndest: %s, src: %s, n=10\n", dest, src);
	ft_strncpy(dest, src, 2);
	printf("After: \ndest: %s, src: %s", dest, src);
}

int main(void) {
	test1();
	test2();
	test3();
	test4();
	return (0);

}
