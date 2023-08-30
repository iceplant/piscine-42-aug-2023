#include "ft_advanced_sort_string_tab.c"
#include <stdio.h>

void print_str_arr(char **tab)
{
	int i;
	i = 0;
	while (tab[i])
	{
		printf("%s ", tab[i]);
		i++;
	}
	printf("\n");
}

int	ft_strcmp(char *s1, char *s2)
{
	int	iter;

	iter = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (s2[0]);
	if (s2 == 0)
		return (s1[0]);
	while (s1[iter] != '\0' && s2[iter] != '\0' && s1[iter] == s2[iter])
	{
		iter++;
	}
	if (s1[iter] == s2[iter])
		return (0);
	if (s1[iter] == '\0')
		return (-1 * s2[iter]);
	if (s2[iter] == '\0')
		return (s1[iter]);
	return (s1[iter] - s2[iter]);
}

int main(void)
{
	char *test[] = {"a", "bec", "abc", "zyx", "ay", NULL};

	char *test2[] = {};

	print_str_arr(test);

	ft_str_swap(test, test + 1);

	ft_advanced_sort_string_tab(test, &ft_strcmp);

	print_str_arr(test);
}
