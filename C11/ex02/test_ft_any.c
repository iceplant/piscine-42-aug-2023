#include "ft_any.c"
//#include <string.h>
#include <stdio.h>

int f (char *str)
{
	return (str[0] == 'a');
}

int main(void)
{
	char *test[] = {"abc", "def", NULL};
	char *test2[] = {"def", NULL};
	printf("%d\n", ft_any(test, f));
	printf("%d\n", ft_any(test2, f));
}
