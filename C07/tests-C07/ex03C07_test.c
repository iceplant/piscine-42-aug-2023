#include "utils.c"
#include "../ex03/ft_strjoin.c"

int main(void)
{
	//char strs2[2][3] = {"abc", "def", "", "123456789"}; // why does this not work?!? How is declaring it like this different than a char **?
	//char *rtn2 = ft_strjoin(4, strs2, "-UNIONPOWER-");
	
	
	
	char **strs = malloc(sizeof(int*) * 4);
	strs[0] = "abc";
	strs[1] = "def";
	strs[2] = "";
	strs[3] = "1234678964362";
	char *rtn = ft_strjoin(4, strs, "-UNIONPOWER-");
	printf("%s\n",rtn); 

	char *rtn3 = ft_strjoin(0, strs, "-UNIONPOWER-");
	assert(rtn3[0] == '\0');
	free(rtn3);	
}
