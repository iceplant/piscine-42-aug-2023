#include "../ex05/ft_atoi_base.c"
#include <stdio.h>

int main(void) {
	char c = 'f';
	char *base1 = "0123456789";
	char *base2 ="0123456789abcdef";  
	
	char *s1 ="   +++-+-+-12345"; 
	char *s2 ="   ---+-+-1d2e3aj45";
	char *s3 = "000";
	char *s4 = "     ----++++0000123";
	
	printf("%d\n", ft_check_base(s1));
	printf("char %c with base %s converts to %d\n", c, base2, ft_char_to_val('f', base2));

	int d = ft_atoi_base(s1 ,base1);
	printf("string %s with base %s atois to %d\n", s1, base1, d);
	int d2 = ft_atoi_base(s2, base2);
	printf("string %s with base %s atois to %d\n",s2, base2, d2);
	int d3 = ft_atoi_base(s3, base2);
	printf("string %s with base %s atois to %d\n",s3, base2, d3);
	int d4 = ft_atoi_base(s4, base1);
	printf("string %s with base %s atois to %d\n",s4, base1, d4);	
}
