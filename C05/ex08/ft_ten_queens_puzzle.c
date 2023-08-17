/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:31:00 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 22:19:54 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_display_board(int board[10][10]) {
	int i = 0;
	int j;
	while (i < 10) {
		j = 0;
		while (j < 10) {
			printf("%d", board[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void zero_board(int board[10][10]) {
	int i = 0;
	int j;
	while (i < 10) {
		j = 0;
		while (j < 10) {
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

//no - we need to do this with better backtracking to avoid copying the table every time
void ft_set_attack_field(int board[10][10], int x, int y) {
	int i = 0;
	while (x+i < 10) {
		if (y+i < 10)
			board[x+i][y+i] = 1;
		board[x+i][y] = 1;
		if (y-i < 10) 
			board[x+i][y-i] = 1;

// 2 = queen, 1 = queen's path
int ft_ten_queens_puzzle(void) {
	int board[10][10];
	zero_board(board);
	board[0][0] = 1;
	int x = 0;
	int y = 0;
	while (y < 10) {
		if(board[x][y] == 0) {
			board[x][y] = 2;
			ft_set_attack_field(board, x, y);


	ft_display_board(board);
	return (0);
}

int main(void) {
	ft_ten_queens_puzzle();
}
