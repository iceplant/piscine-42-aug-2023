#include <unistd.h>
#include <stdio.h>
int str_len(char* str) {
	int i;
	i = 0;
	while (str[i] != '\0') {
		i ++;
	}
	return i;
}


void ft_reverse(char* str){
	char temp;
	int i;
	int l;

	l = str_len(str);	
	i = 0;
	
	while (i <= l/2) {
		temp = str[i];
		str[i] = str[l-i-1];
		str[l-i-1] = temp;
		i ++;
	}	
}

int ft_atoi(char* str) {
	int neg;
	neg = 0;
	int i;
	i = 0;
	int rtn;
	rtn = 0;
	if (str[0] == '-') {
		neg = 1;
		i ++;
	}
	while (str[i] != '\0') {
		rtn *= 10;
		rtn += str[i];
		i ++;
	}
	if (neg) {
		rtn *= -1;
	}
	return rtn;	
}

int main(void) {
	char str[12] = "Hello World!";
//	write(1, str, str_len(str));
	
//	ft_reverse(str);

//	 write(1, str, str_len(str)+1);
	
	int i = ft_atoi("12345");
	printf("%d",  i); 
	return (0);
}
