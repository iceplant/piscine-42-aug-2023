#include "../ex00/ft_strlen.c"
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void) {
	assert(strlen("abcde") == ft_strlen("abcde"));
	assert(strlen("00000000000000000000") == ft_strlen("00000000000000000000"));
	assert(strlen("") == ft_strlen("")); // strlen breaks on null strings so this is fine => NO, THIS IS FALSE, IT SHOULD WORK HERE!!!
	printf("strlen: %lu, ft: %d", strlen(""), ft_strlen(""));
}
