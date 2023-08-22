#include "../ex00/ft_strdup.c"
#include "utils.c"

int main(void)
{
	assert(ft_strlen("abc") == 3);

	char *s1 = "abc";
	char *s2 = ft_strdup(s1);
	char *s3 = strdup(s1);
	printf("%s\n", s2);
	assert(s1 != s2);
	assert(*s1 == *s2);
	assert(strcmp(s2, s3) == 0);

	return (0);
}
