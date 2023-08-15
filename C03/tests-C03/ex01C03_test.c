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
	//printf("%d\n", strncmp(a,c, 0)); // turns out regular strncmp segaults with 0 so these tests aren't reasonable
	//printf("%d\n", strncmp(a,c, -1));

	//printf("%d\n", strncmp(0,c,1));
	//printf("%d\n", strncmp(a,0,1));
	//printf("%d\n", strncmp(0,0,0));

	printf("%d\n", ft_strncmp(a,d,10)); // d = 100
	printf("%d\n", ft_strncmp(a,d, 3));
    printf("%d\n", ft_strncmp(a,d, 1));
    
    printf("%d\n", ft_strncmp(d,a,10)); // d = 100
	printf("%d\n", ft_strncmp(d,a, 3));
    printf("%d\n", ft_strncmp(d,a, 1));


}
