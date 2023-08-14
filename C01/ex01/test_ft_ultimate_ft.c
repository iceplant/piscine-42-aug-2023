#include "ft_ultimate_ft.c"
#include "ft_putnbr.c"

void test1(void) {
	int i;
	i = 1;
	int *ptr = &i;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	ft_putnbr(*********ptr9);
}

//DOES NOT WORK!!!
void test2(void) {
	int i;
	i = 1;
	int *ptr = &i;
	int *ptr2 = &ptr;
	int *ptr3 = &ptr2;
	int *ptr4 = &ptr3;
	int *ptr5 = &ptr4;
	int *ptr6 = &ptr5;
	int *ptr7 = &ptr6;
	int *ptr8 = &ptr7;
	int *ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	ft_putnbr(*********ptr9);	
}

int main(void) {
	test1();
	//test2()

}

