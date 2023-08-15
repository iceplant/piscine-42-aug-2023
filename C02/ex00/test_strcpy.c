#include "ft_strcpy.c"
#include <stdio.h>
#include <stdlib.h>

//declaring a string array as dest
void test1(void) {
	char *src = "abcde";
	char dest[] = "zywse"; //THIS IS DIFFERENT THAN DEFINING A STRING!!!!
	printf("\n\n\nTest 1: \n");
	printf("Before: \ndest: %s, src: %s\n", dest, src);
	ft_strcpy(dest, src);
	printf("After: \ndest: %s, src: %s", dest, src);
}

// with malloc
void test2(void) {
	char *src = "abcde";
	char *dest = (char *) malloc(5);
	printf("\n\n\nTest 2: \n");
	printf("Before: \ndest: %s, src: %s\n", dest, src);
	ft_strcpy(dest, src);
	printf("After: \ndest: %s, src: %s", dest, src);
}

// this should segfault! defining an array like this makes it immutable too!
void test3(void) {
	char *src = "abcde";
	char *dest;
  	dest	= "abcde"; 
	printf("\n\n\nTest 3: \n");
	printf("Before: \ndest: %s, src: %s\n", dest, src);
	ft_strcpy(dest, src);
	//printf("After: \ndest: %s, src: %s", dest, src);
}



int main(void) {
	// test3();
	test2();
	test1();
	return (0);
	
}

