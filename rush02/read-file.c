/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read-file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:55:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/26 17:48:34 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

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
			//printf("reached line: %s \n\n and %s \n\n\n\n\n", nb, dict_str + i);
			if (ft_is_this_line_a_match(nb, dict_str + i))
			{
				//printf("Match found!\n");		
				ft_put_word_from_line(dict_str + i);
				return ;		
			}
		}
	i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strndup(char *src, int n)
{
	char	*rtn;

	rtn = malloc(n + 1);
	ft_strncpy(rtn, src, n);
	return (rtn);
}

char	*ft_strndup_with_zeros(char *src, int n, int num_zeros)
{
	char	*rtn;
	int i;

	rtn = malloc(n + num_zeros + 1);
	ft_strncpy(rtn, src, n);
	i = 0;
	while (i < num_zeros)
	{
		rtn[n + i] = '0';
		i++;
	}
	rtn[n + i] = '\0';
	return (rtn);
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



void  ft_put_words_from_value(char *str, char* dict_str)
{
	int i;
	int digit;
	char *to_find;

	i = 0;
	
	digit = 0;
	while (str[digit] >= '0' && str[digit] <= '9')
	{
		digit++;
	}
	//printf("digits: %d\n", digit);
	
	while(str[i] >= '0' && str[i] <= '9')
	{
		//digits are indexing from 1!
		if (digit == 1)
		{
			//printf("hit digit == 1\n");
			// look up str[i]
			
			to_find = ft_strndup(str + i, 1);
			//printf("to_find: %s\n", to_find);
			ft_find_and_put_value_from_dict(to_find, dict_str);
		}
		if (digit == 2)
		{
			if (str[i] == '1' || str[i + 1] == '0')
			{
				to_find = ft_strndup(str + i, 2);
				//printf("to find: %s\n", to_find);
				ft_find_and_put_value_from_dict(to_find, dict_str);
				return ;
				//miramos adelante para los unideles
				//hacemos una incrementacion extra
			} else { 
				to_find = ft_strndup_with_zeros(str + i, 1, 1);
				//printf("to find: %s\n", to_find);
				
				ft_find_and_put_value_from_dict(to_find, dict_str);
				if (str[i] != '0' && str[i + 1] != '0')
					write(1, "-", 1);
			}
		}
								
		if (digit == 3)
		{
			// look up str[i]
			// add word for "hundred" that is in the dictionary
			// add " and " if either of the next values are not zero
			to_find = ft_strndup(str + i, 1);
			ft_find_and_put_value_from_dict(to_find, dict_str);
			write(1, " hundred", 8);
			if (str[i + 1] != '0' || str[i + 2] != '0')
				write(1, " and ", 5);
	   	}
		if (digit == 4)
		{
			// look up str[i]
			// add word for "thousand" that is in the dictionary
			to_find = ft_strndup(str + i, 1);
			ft_find_and_put_value_from_dict(to_find, dict_str);
			write(1, " ", 1);
			ft_find_and_put_value_from_dict("1000", dict_str);
			write(1, " ", 1);
		}
/*
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
		*/
		i++;
		digit--;
	}

}

char *to_str(int i)
{
	char d1 = (i / 10) + '0';
	char d2 = (i % 10) + '0';
	char *rtn = malloc(sizeof(char) * 3);
	rtn[0] = d1;
	rtn[1] = d2;
	
	return rtn;
}

// Driver code
int main()
{
    int fd;
	int sz;
    char* dict_str = (char*)malloc(1000 * sizeof(char));
 
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

	/*
    printf("Those bytes are as follows: % s\n", dict_str);
	char *number = "5";
	ft_find_and_put_value_from_dict(number, dict_str);
	char *test_line = "13: thirteen";
	int output = ft_is_this_line_a_match(number, test_line);
	printf("result: %d\n", output); */

	int i = 1100;
	char *number_str[4];
	while (i < 1130)
	{
		sprintf(number_str, "%d", i);
		ft_put_words_from_value(number_str, dict_str);
		printf("\n");
		i++;
	}

    
	close(fd);
	return 0;
}


