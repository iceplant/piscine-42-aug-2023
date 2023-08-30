#include "ft_sort_string_tab.c"
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

int main(void)
{	
	char *test[] = {"a", "bec", "abc", "zyx", "ay", NULL};
	
	print_str_arr(test);

	ft_str_swap(test, test + 1);

	ft_sort_string_tab(test);
		
	print_str_arr(test); 
}
