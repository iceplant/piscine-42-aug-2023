/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read-file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:55:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/26 15:28:53 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int ft_is_this_line_a_match(char *number, char *line)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (number[i] != line[i])
		{
			return (0);
		}
		i++;
	}
	if (line[i] >= '0' && line[i] <= '9')
	{
		return (0);
	}
	return (1);
}

void ft_put_word_from_line(char *line)
{
	int i;

	i = 0;
	while (line[i] >= '0' && line[i] <= '9')
	{
		i++;
	}
	
	while (line[i] == ' ' || line[i] == ':')
	{
		i++;
	}
	while (line[i] != '\n' && line[i] != '\0')
	{
		write(1, line + i, 1);
		i++;
	}
	
}


void ft_find_and_put_value_from_dict(char *nb, char *dict_str)
{
	int	i;

	i = 0;
	while (dict_str[i])
	{
		if (i == 0 || dict_str[i - 1] == '\n')
		{
			printf("reached line: %s \n\n and %s \n\n\n\n\n", nb, dict_str + i);
			if (ft_is_this_line_a_match(nb, dict_str + i))
			{
				printf("Match found!\n");		
				ft_put_word_from_line(dict_str + i);
				return ;		
			}
		}
	i++;
	}
}



/*
 * "     ++--+-+1234asbacdf" => 
 * 	- go to end of the number 
 * 	- start with smallest digit
 * 	- iterate to the left, multiplying each digit by the number of iterations before looking up in table
 *
 */
// ponemos zeros para que siempre tenga exactamente 10 characteres?
//


/*
void  ft_put_words_from_value(char *str)
{
	int i;
	int digit;

	i = 0;
	
	digit = 0;
	while (str[digit] >= '0' && str[digit] <= '9')
	{
		digit++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		if (digit == 1)
			// look up str[i]
		if (digit == 2)
			//look up str[i]
			ft_find_value_in_dict(str[i]*10);
			// add "-" with no space between this and next value (unless the next value is zero)
		if (digit == 3)
			// look up str[i]
			// add word for "hundred" that is in the dictionary
			// add " and " if either of the next values are not zero
		if (digit == 4)
			// look up str[i]
			// add word for "thousand" that is in the dictionary
		if (digit == 5)
			// same as 2
		if (digit == 6)
			// same as 3
		if (digit == 7)
			// look up str[i]
			// look up 10^6 = 1 million
		if (digit == 8)
			// same as 2
		if (digit == 9)
			// same as 3
		if (digit == 10)
			// look up str[i]
			// look up 10^9 = 1 billion
		i--;
		digit++;
	}

}


*/


// Driver code
int main()
{
    int fd;
	int sz;
    char* dict_str = (char*)calloc(100, sizeof(char));
 
    // Opening file in reading mode
    fd = open("numbers.dict", O_RDONLY);
 
    if (0 == fd) {
        printf("file can't be opened \n");
    }
 
    sz = read(fd, dict_str, 100000);
    // printf("called read(% d, dict_str, 10). returned that"
    //       " %d bytes were read.\n",
    //       fd, sz);
    dict_str[sz] = '\0';
    //printf("Those bytes are as follows: % s\n", dict_str);
	//
	
	char *number = "5";
	ft_find_and_put_value_from_dict(number, dict_str);
	
	

	char *test_line = "13: thirteen";
//	int output = ft_is_this_line_a_match(number, test_line);
//	printf("result: %d\n", output);

    
	close(fd);
	return 0;
}


