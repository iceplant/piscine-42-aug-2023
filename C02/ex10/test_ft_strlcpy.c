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
            size
          );
}

void test2(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}



int main(void) {
	printf("Remember, man strlcpy says size should include the terminating null pointer!");
	test(19);
    test(10);
    test(1);
    test(0);

	test2(19);
	test2(10);
	test2(1);
	test2(0);

    return(0);
}
