#include "../ex00/ft_strcmp.c"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void) {
	char a[] = "abc";
	char b[] = "abd";
	char c[] = "abe";
	char d[] = "abcde";

	printf("Comparing %s and %s %d\n", a, b, ft_strcmp(a,b));
	assert(strcmp(a,b) == ft_strcmp(a,b));
	printf("Comparing %s and %s %d\n", a, c, ft_strcmp(a,b));
	assert(strcmp(a,c) == ft_strcmp(a,c));
	printf("Comparing %s and %s %d\n", a, d, ft_strcmp(a,c)); // d = 100
	assert(strcmp(a,d) == ft_strcmp(a,d));
	printf("Comparing %s and %s %d\n", d, a, ft_strcmp(a,b));
	assert(strcmp(d,a) == ft_strcmp(d,a));
	printf("Comparing %s and %s %d\n", a, a, ft_strcmp(d,a));	
	assert(strcmp(a,a) == ft_strcmp(a,a));
}

