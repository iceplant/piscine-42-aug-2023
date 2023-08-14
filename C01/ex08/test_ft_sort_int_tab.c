#include "ft_sort_int_tab.c"
#include <stdio.h>

int main(void) {
	int arr[10] = {0, 2, 0, 3, 4, 0, 6, 0, 8, 9};

	ft_sort_int_tab(arr, 10);

	for(int i=0;i<10;++i) {
  		printf("%d ", arr[i]);
	}

}

