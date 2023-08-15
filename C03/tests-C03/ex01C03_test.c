#include "../ex01/ft_strncmp.c"
#include <stdio.h>

int main(void) {
	char a[] = "abc";
	char b[] = "abd";
	char c[] = "abe";
	char d[] = "abcde";
	printf("%d\n", ft_strncmp(a,b, 10));
	printf("%d\n", ft_strncmp(a,b, 3));	
	printf("%d\n", ft_strncmp(a,b, 1));

	
	printf("%d\n", ft_strncmp(a,c, 20));
	printf("%d\n", ft_strncmp(a,c, 3));	
	printf("%d\n", ft_strncmp(a,c, 2));
	printf("%d\n", ft_strncmp(a,c, 0));

	printf("%d\n", ft_strncmp(0,c,1));
	printf("%d\n", ft_strncmp(a,0,1));
	printf("%d\n", ft_strncmp(0,0,0));

	printf("%d\n", ft_strncmp(a,d,10)); // d = 100
	printf("%d\n", ft_strncmp(a,d, 3));
    printf("%d\n", ft_strncmp(a,d, 1));	


}

