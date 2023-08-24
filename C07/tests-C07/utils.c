#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


void ft_print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
