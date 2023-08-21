#include "ft_strdup.c"
#include <assert.h>

int main(void)
{
	assert(ft_strlen("abc") == 3);

	char *s1 = "abc";
	char *s2 = ft_strdup(s1);
	assert(s1 != s2);
	assert(*s1 == *s2);

	return (0);
}
