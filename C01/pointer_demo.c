#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char a;
   	a	= '3';
	


	char* ptri; //char *ptr; also works!
	ptr = &a;

	printf("\na: ");
	printf("%c", a);

	printf("\n&a: ");
	printf("%p\n", &a);
		
	//printf("\n*a: "); //error!!!
	//printf("%p\n", *a);
	
	printf("\nptr: ");
	printf("%p", ptr);
	
	printf("\n*ptr: ");
	printf("%c", *ptr);

	printf("\n&ptrc: ");
	printf("%p\n", &ptr);	

}

