#include "ft_count_if.c"
#include <stdio.h>

int f (char *str)
{
	return (str[0] == 'a');
}

int main(void)
{
	char *test[] = {"abc", "def", NULL};
	char *test2[] = {"def", NULL};
	printf("%d\n", ft_count_if(test, 2, f));
	printf("%d\n", ft_count_if(test2, 1, f));
}

