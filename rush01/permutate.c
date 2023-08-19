/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:36:50 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/19 13:34:42 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void swap(char* str, int i, int j)
{
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void permute(char *string, int start, int end)
{
    if(start == end)
    {
        printf("%s\n", string);
        return;
    }

    permute(string, start + 1, end);
    int i;
    for(i = start + 1; i < end; i++)
    {
        if(string[start] == string[i])
            continue;
        swap(string, start, i);
        permute(string, start + 1, end);
        swap(string, start, i);
    }
}


int main(void)
{
	char str[] = "12345";
	permute(str, 0, 4);
}
