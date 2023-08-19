
// No hace falta con el 4x4 porque ya lo podemos poner nosotros: 
// 	- funcion que genera todas las filas posibles
// 	- funcion que verifica si las filas son posibles con los valores de los bordes => LOL JK we do need this to check if the columns are correct

// implementacion del cuadrado (array 2D characteres)

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


//board: 2D array[row][column] where 


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
		if (!ft


void ft_print_board(char **board, int board_dimension)
{
}

// returns 1 if a solution was found, 0 if not
int ft_solve(char **board, int rows_filled, int board_dimension)
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
		edges = 
		int n = # possibilites for edge values
		int i = 0;
		while (i < n)
		{
			//fill board with ith possibility for rows_filled + 1 edge
			if (ft_solve(board, rows_filled + 1, board_dimension))
				return;
			i++;
		}


int main(void) {
	
}
