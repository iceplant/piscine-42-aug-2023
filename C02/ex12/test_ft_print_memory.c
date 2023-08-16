#include "ft_print_memory.c"
#include <stdio.h>

void *str = "Bonjour les aminches...c.est fou.tou.ce que on peut faire avec...print_memory....lol.lol.   .";

int main(void){
	//void *str = "Hello world!";
	ft_print_memory(str, 90);
}
