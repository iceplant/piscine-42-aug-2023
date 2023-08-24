#include "../ex05/ft_split.c"
#include <stdio.h>

int main(void)
{
	char *test = "---El-pueblo_-unido-_jamas-_-_-_--sera-vencido---";
	char **rtn = ft_split(test, "-_");
	
	int i = 0;
	while (rtn[i])
	{
		printf("%s\n", rtn[i]);
		i++;
	}
}



