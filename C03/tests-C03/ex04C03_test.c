#include "../ex04/ft_strstr.c"
#include <stdio.h>
#include <assert.h>

int main(void) {
	char *s1 = "abcde";
	char *s2 = "bcd";
	char *s3  = "bcf";
	char *s4  = "a";
	char *s5 = "";
	printf("%s and %s: %s\n", s1, s2, ft_strstr(s1,s2));
	assert(ft_strstr(s1,s2) == s1 + 1);
	printf("%s and %s: %s\n", s1, s3, ft_strstr(s1,s3));
	//assert(ft_strstr(s1,s4) == NULL); //we donn't assert things are null in C apparently
	printf("%s and %s: %s\n", s1, s4, ft_strstr(s1,s4));
	assert(ft_strstr(s1, s4) == s1);
	printf("%s and %s: %s\n", s1, s5, ft_strstr(s1,s5));
	assert(ft_strstr(s1,s5) == s1);
	printf("%s and %s: %s\n", s2, s3, ft_strstr(s2,s3));
	
	return (0);
}
