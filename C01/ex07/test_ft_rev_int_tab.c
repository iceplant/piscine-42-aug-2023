#include "ft_rev_int_tab.c"
#include <stdio.h>

void print_int_arr(int *arr,int n) {
	for(int i=0;i<n;++i) {
  		printf("%d ", arr[i]);
	}	
	printf("\n");	
}


void test_rev1() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	print_int_arr(arr, 10);
	ft_rev_int_tab(arr, 10);	
	print_int_arr(arr, 10);
	printf("\n");
}

void test_rev2() {
	int arr[1] = {4};
	print_int_arr(arr, 1);
	ft_rev_int_tab(arr,1);	
	print_int_arr(arr, 1);
	printf("\n");	
}

void test_rev3() {
	int arr[3] = {1,2,3};
	print_int_arr(arr, 3);
	ft_rev_int_tab(arr,3);	
	print_int_arr(arr, 3);
	printf("\n");	
}

void test_rev4() {
	int arr[0] = {};
	print_int_arr(arr, 0);
	ft_rev_int_tab(arr,0);
	print_int_arr(arr,0); 
	printf("\n");	
}

void test_rev5() {
	int *arr; 
	ft_rev_int_tab(arr, 0);
}

void test_rev6() {
	int *arr = NULL; 
	ft_rev_int_tab(arr, 0);
}


int main(void) {
	test_rev1();
	test_rev2();
	test_rev3();
	test_rev4();
	test_rev5();
	test_rev6();
}

