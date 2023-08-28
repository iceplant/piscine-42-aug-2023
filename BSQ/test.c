#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_get_dict_str_from_file(char *filename)
{
	char	*dict_str;
	int		fd;
	int		sz;

	dict_str = (char *)malloc(1000 * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (0 == fd)
	{
		printf("file can't be opened \n");
		return (NULL);
	}
	sz = read(fd, dict_str, 100000);
	dict_str[sz] = '\0';
	close(fd);
	return (dict_str);
}

int	ft_get_board_line_lenth(char *board)
{
	int	i;
	
	i = 5;
	while (board[i] != '\n')
		i++;
	return (i);
}

//index
char ft_get_board_val(char *board, int row, int col)
{

}

char ft_set_board_val(char *board, int row, int col, char val)
{

}


// handle case where empty, obstacle, or full are digits
int ft_backtrack(char *board)
{
	int num_lines = board[0] - '0';
	char empty = board[1];
	char obstacle = board[2];
	char full = board[3];
	int line_length = ft_get_board_line_lenth(board);

	int row  = 0;
	int column = 0;
	while (row < num_lines)
	{
		board[row * line_length] = '1';
		row++;
	}
}

//int ft_get_x_dim();
//int ft_get_y_dim();

int main(void)
{
	char *rtn = ft_get_dict_str_from_file("internet_example_file");

	int num_lines = rtn[0] - '0';
	char empty = rtn[1];
	char obstacle = rtn[2];
	char full = rtn[3];

	printf("%s\n", rtn);

	ft_backtrack(rtn);
	
	printf("%s\n", rtn);

	return (0);


}
