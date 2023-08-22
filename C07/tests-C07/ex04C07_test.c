//#include "../ex04/ft_convert_base.c"
//#include "utils.c"

#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_rev_char_tab(char *tab, int size);
char	*ft_nbr_to_base(int nbr, char *base);

int main(void){
	char base10[] = "0123456789";
	char base_hex[] = "0123456789abcdef";
	char base_binary[] = "01";
	//test ft_nbr_to_base
    printf("%s\n", ft_nbr_to_base(123456789, "0123456789abcdef"));

	//test reverse
    char str[] = "abcde";
    printf("%s\n", str);
    ft_rev_char_tab(str, 5);
    printf("%s\n", str);
	
	char *str2 = ft_convert_base("12345", base10, base_hex);
	printf("%s\n", str2);
	assert(strcmp(str2, "3039") == 0);

	char *str3 = ft_convert_base("12345", base_hex, base_binary);
	printf("%s\n", str3);
	assert(strcmp(str3, "10010001101000101") == 0);
}
