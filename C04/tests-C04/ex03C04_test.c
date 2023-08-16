#include "../ex03/ft_atoi.c"
#include <assert.h>
#include <stdio.h>

int	main(void) 
{
	int i;
 
	char	*str;
	int		n;
	char	*str2;

	str = " ---+--+1234ab567";
	n = ft_atoi(str);
	assert(n == -1234);
	printf("%s prints as %d", str, n);
	str2 = "            +++++000a09999";
	n = ft_atoi(str2);
	assert(n == 0);
	printf("%s prints as %d", str2, n); 
	}
