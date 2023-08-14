#include "../ex00/ft_strcmp.c"
#include <stdio.h>

int main(void) {
	char a[] = "abc";
	char b[] = "abd";
	char c[] = "abe";
	char d[] = "abcde";
	printf("%d\n", ft_strcmp(a,b));
	printf("%d\n", ft_strcmp(a,c));
	printf("%d\n", ft_strcmp(a,d)); // d = 100
	printf("%d\n", ft_strcmp(d,a));
   printf("%d\n", ft_strcmp(a,a));	
}

