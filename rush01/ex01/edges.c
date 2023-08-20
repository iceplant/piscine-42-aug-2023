/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edges.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:39:20 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 18:53:33 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// needed for malloc
#include <stdlib.h>

void	get_possible_rows_from_edges_helper(char **arr, char e1, char e2)
{
	if (e1 == '1' && e2 == '4')
		arr[0] = "4321";
	if (e1 == '4' && e2 == '1')
		arr[0] = "1234";
	if (e1 == '2' && e2 == '2')
	{
		arr[0] = "2143";
		arr[1] = "2413";
		arr[2] = "3142";
		arr[3] = "3412";
		arr[4] = "3241";
		arr[5] = "1423";
	}
	if (e1 == '2' && e2 == '3')
	{
		arr[0] = "1432";
		arr[1] = "2431";
		arr[2] = "3421";
	}
	if (e1 == '3' && e2 == '2')
	{
		arr[0] = "2341";
		arr[1] = "1342";
		arr[2] = "1243";
	}
}

void	get_possible_rows_from_edges_helper2(char **arr, char e1, char e2)
{
	if (e1 == '1' && e2 == '2')
	{
		arr[0] = "4123";
		arr[1] = "4213";
	}
	if (e1 == '2' && e2 == '1')
	{
		arr[0] = "3214";
		arr[1] = "3124";
	}
	if (e1 == '1' && e2 == '3')
	{
		arr[0] = "4231";
		arr[1] = "4132";
		arr[2] = "4312";
	}
	if (e1 == '3' && e2 == '1')
	{
		arr[0] = "1324";
		arr[1] = "2314";
		arr[2] = "2134";
	}
}

// make this shorter? implement some kind of db?
// idea: for e1 > e2 call the function backwards and reverse
// sizeof(char *) = 8
char	**get_possible_rows_from_edges(char e1, char e2)
{
	char	**arr;

	arr = (char **)malloc(5 * 8);
	get_possible_rows_from_edges_helper(arr, e1, e2);
	get_possible_rows_from_edges_helper2(arr, e1, e2);
	return (arr);
}
