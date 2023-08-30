#include "ft_count_if.c"
#include <stdio.h>
#include <assert.h>

int f (char *str)
{
	return (str[0] == 'a');
}

int main(void)
{
	char *test[] = {"abc", "def", NULL};
	char *test2[] = {"def", NULL};
	char *test3[] = {"abc", "abd", "d", "e", "efgaaaaa", "a", ""};
	printf("%d\n", ft_count_if(test, 2, f));
	printf("%d\n", ft_count_if(test2, 1, f));

	assert(ft_count_if(test, 2, f) == 1);
	assert(ft_count_if(test3, 7, f) == 3);

}

