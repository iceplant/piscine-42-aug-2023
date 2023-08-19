/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:22:57 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/19 12:36:39 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// only 4x4 so far

#include <stdio.h>
#include <assert.h>


//NO! Generally in C you should just track how big your arrays are elsewhere because only strings are null terminated! 
int ft_int_arr_len(int *arr)
{
	return (sizeof(*arr) / sizeof(arr[0]));
}

int ft_check_if_vals_satisfy_edges(int *heights, int edge1, int edge2)
{
	int max_height_so_far1 = 0;
	int max_height_so_far2 = 0;
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

int ft_factorial(int n)
{
	if (n == 0 || n == 1) return 1;
	return n * ft_factorial(n-1);
}	


/*
int **ft_get_permutations(int *nums_to_permute, int n)
{

	int num_perms = ft_factorial(n);
	int **permutations[][];
	if (n == 0) return 0;
	if (n == 1)
	{
		permutations = 
	}
} 
*/

void permute(int *array,int i,int length) { 
  if (length == i){
     printArray(array,length);
     return;
  }
  int j = i;
  for (j = i; j < length; j++) { 
     swap(array+i,array+j);
     permute(array,i+1,length);
     swap(array+i,array+j);
  }
  return;
}

int **ft_generate_sequences_for_edges(int edge1, int edge2)
{
	// generate all edges
	// filter for the ones that satisfy the edges
	int **edges[16][4];
	return (0);
}




int main(void) {
	int test1[4] = {1, 2, 3, 4};
	assert(ft_check_if_vals_satisfy_edges(test1, 4, 1));
	assert(!ft_check_if_vals_satisfy_edges(test1, 3, 2));
	assert(ft_factorial(5) == 120);
	permute();
	return (0);
}
