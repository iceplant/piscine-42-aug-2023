#include "../ex01/ft_strncmp.c"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void) {

	char a[] = "abc";
	char b[] = "abd";
	char c[] = "abe";
	char d[] = "abcde";

	assert(strncmp(a,b,10) == ft_strncmp(a,b,10));
	assert(strncmp(a,b,3) == ft_strncmp(a,b,3));
	assert(strncmp(a,b,1) == ft_strncmp(a,b,1));	

	assert(strncmp(a,c,20) == ft_strncmp(a,c,20));
	assert(strncmp(a,c,3) == ft_strncmp(a,c,3));
	assert(strncmp(a,c,1) == ft_strncmp(a,c,1));

	//printf("%d\n", strncmp(a,c, 0)); // turns out regular strncmp segaults with 0 so these tests aren't reasonable
	//printf("%d\n", strncmp(a,c, -1));

	//printf("%d\n", strncmp(0,c,1));
	//printf("%d\n", strncmp(a,0,1));
	//printf("%d\n", strncmp(0,0,0));

	/*
	printf("%d\n", ft_strncmp(a,d,10)); // d = 100
    printf("%d\n", ft_strncmp(d,a,10)); // d = 100 */


	printf("ft d a 3 %d\n", ft_strncmp(d,a, 3));
	printf("original d a 3 %d\n", strncmp(d,a,3));
    printf("%d\n", ft_strncmp(d,a, 1)); 

	assert(strncmp(d,a,10) == ft_strncmp(d,a,10));
	assert(strncmp(d,a,3) == ft_strncmp(d,a,3));
	assert(strncmp(d,a,1) == ft_strncmp(d,a,1));

	assert(strncmp(a,d,10) == ft_strncmp(a,d,10));
	assert(strncmp(a,d,3) == ft_strncmp(a,d,3));
	assert(strncmp(a,d,1) == ft_strncmp(a,d,1)); 
}
