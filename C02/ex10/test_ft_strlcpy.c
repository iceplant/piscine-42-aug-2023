#include "ft_strlcpy.c"
#include <stdio.h>


// Testing suite inspired by https://c-for-dummies.com/blog/?p=3886
void test(int size) {
	char str[] = "Disincentivize rent-seeking behavior!";
	char buffer[19];
    int r;

    r = ft_strlcpy(buffer,str,size);

    printf("Copied '%s' into '%s', length %d\n",
            str,
            buffer,
            r
          );
}
int main(void) {
	test(19);
    test(10);
    test(1);
    test(0);
    return(0);
}
