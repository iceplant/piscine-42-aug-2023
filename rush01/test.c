#include <stdio.h>
#include <unistd.h>

// No hace falta con el 4x4 porque ya lo podemos poner nosotros: 
// 	- funcion que genera todas las filas posibles

//	- implementacion del cuadrado (array 2D characteres)
// 	- funcion que verifica si las filas son p0osibles con los valores de los bordes => LOL JK we do need this to check if the columns are correct

//
// funcion que: 
// 	- accepta un cuadrado
// 	- verifica si ya esta lleno de numeros/terminado
// 			- si si, verifica si esta correcto
// 					si si, imprimimos el resultado
// 					si no, return that it is not correct
// 			- si no, hace una llamada recursiva con cada opcion posible por la fila vacia siguiente  


/* questions
 * Is it possible to have multiple solutions? Assume yes for now
 */

/*
char str[1];
char *str = malloc(sizeof(char));
*/

// BOARD IMPLEMENTATION
// - storing values
// - storing edge values


//board: 2D array[row][column]
  
/*
char	g_characters[4][4][4] =
{
    {
        {'A', 'B'},
        {'C', 'D'}
    },
    {
        {'E', 'F'},
        {'G', 'H'}
    }
};
*/

/*
char *ft_get_column_from_board(char **board, int column, int board_dimension)
{
	char *rtn[board_dimension];
	int i;

	i = 0;
	while (i < board_dimension)
	{
		rtn[i] = board[i][column];
		i++;
	}
	return rtn;
}
*/

int ft_check_if_vals_satisfy_edges(char *heights, int edge1, int edge2)
{
	char max_height_so_far1 = '0';
	char max_height_so_far2 = '0';
	int visible_count1 = 0;
	int visible_count2 = 0;
	int i1 = 0;
	int i2 = 3;
	while (i1 < 4)
	{
		
		if (heights[i1] > max_height_so_far1)
		{
			max_height_so_far1 = heights[i1];
			visible_count1++;
		}
		i1++;
	}
	while (i2 >= 0)
	{
		if (heights[i2] > max_height_so_far2)
		{
			max_height_so_far2 = heights[i2];
			visible_count2++;
		}
		i2--;
	}
	return ((visible_count1 == edge1) && (visible_count2 == edge2));
}

/*
int ft_is_board_correct(char **board, board_dimension)
{
	int row;
	int column;
	
	row = 0;
	while (row < board_dimension)
	{
		if (!ft_check_row(board[row]))
			return 0;
		row++;
	}
	column = 0;
	while (column < board_dimension)
	{
		if (!ft_check_row(ft_get_column_from_board(board, column)))
			return (0);
		column++;
	}
	return (1);
}
*/

/*
// returns 1 if a solution was found, 0 if not
int ft_solve(char **board, char *edges, int rows_filled, int board_dimension)
{
	if (rows_filled == 4)
	{
		if (ft_is_board_correct(board, board_dimension))
		{
			ft_print_board(board, board_dimension);
			return 1; //solution was found
		}
		else 
			return 0;//solution was not found
	} else
	{
		char edge1 = edges[8 + rows_filled];
		char edge2 = edges[12 + rows_filled];
		int num_rows_for_edges = 1;
		int i = 0;
		while (i < num_rows_for_edges)
		{
			//fill board with ith possibility for rows_filled + 1 edge
			if (ft_solve(board, rows_filled + 1, board_dimension))
				return;
			i++;
		}
	}
}
*/

void ft_print_board(char board[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}


void ft_init_board(char board[4][4])
{
	int i;
	int j;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4) 
		{
			board[i][j] = i + j + '0';
			j++;
		}
		i++;
	}
}



int main(int argc, char **argv) {
	//printf("%s\n", argv[0]);
	//printf("%s\n", argv[1]);

	char edges[16];
	int arg_index = 0;
	int edge_index = 0;
	while (argv[1][arg_index] != '\0') {
		if (argv[1][arg_index] != ' ') 
		{
			edges[edge_index] = argv[1][arg_index];
	   		edge_index++;
		}
		arg_index++;
	}

	char board[4][4];

	ft_init_board(board);

	ft_print_board(board);	

	int e1 = 1;
	int e2 = 4;
	char *row = "1234";
	char *row2 = "4321";
	char *row3 = "3142";
	printf("Is row %s valid with edges %d and %d? %d\n", row, e1, e2, ft_check_if_vals_satisfy_edges(row, e1, e2));
	printf("Is row %s valid with edges %d and %d? %d\n", row2, e1, e2, ft_check_if_vals_satisfy_edges(row2, e1, e2));
	printf("Is row %s valid with edges %d and %d? %d\n", row, e1, e2, ft_check_if_vals_satisfy_edges(row, e1, e2));



	//print row
	
	//ft_get_column_from_board(board);
	
	//ft_solve(board
}
