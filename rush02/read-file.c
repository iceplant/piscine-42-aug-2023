/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read-file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:55:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/27 16:10:42 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to implement
// the above approach
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_strncpy(char *dest, char *src, int n);
char	*ft_strndup(char *src, int n);
char	*ft_strndup_with_zeros(char *src, int n, int num_zeros);

void	ft_pwfv_handle_digits_1_and_2(char *str,
		char *dict_str, int i, int digit)
{
	char	*to_find;

	if (digit % 3 == 1 && str[i] != '0')
	{
		to_find = ft_strndup(str + i, 1);
		ft_find_and_put_value_from_dict(to_find, dict_str);
	}
	if (digit % 3 == 2 && str[i] != '0')
	{
		if (str[i] == '1' || str[i + 1] == '0')
		{
			to_find = ft_strndup(str + i, 2);
			ft_find_and_put_value_from_dict(to_find, dict_str);
			i += 1;
			digit--;
		}
		else
		{
			to_find = ft_strndup_with_zeros(str + i, 1, 1);
			ft_find_and_put_value_from_dict(to_find, dict_str);
			if (str[i] != '0' && str[i + 1] != '0')
				write(1, "-", 1);
		}
	}
}

void	ft_pwfv_handle_digits_3(char *str, char *dict_str, int i, int digit)
{
	char	*to_find;

	if (digit % 3 == 0 && str[i] != '0')
	{
		to_find = ft_strndup(str + i, 1);
		ft_find_and_put_value_from_dict(to_find, dict_str);
		write(1, " hundred", 8);
		if (str[i + 1] != '0' || str[i + 2] != '0')
			write(1, " and ", 5);
	}
}

void	ft_pwfv_handle_digits_4_and_above(char *str,
		char *dict_str, int i, int digit)
{
	char	*to_find;

	if (digit == 4)
	{
		write(1, " ", 1);
		ft_find_and_put_value_from_dict("1000", dict_str);
		write(1, " ", 1);
	}
	if (digit == 7)
	{
		write(1, " ", 1);
		ft_find_and_put_value_from_dict("1000000", dict_str);
		write(1, " ", 1);
	}
	if (digit == 10)
	{
		write(1, " ", 1);
		ft_find_and_put_value_from_dict("1000000000", dict_str);
		write(1, " ", 1);
	}
}

void	ft_put_words_from_value_helper(char *str, 
		char *dict_str, int i, int digit)
{
	if (ft_find_and_put_value_from_dict(str, dict_str))
		return ;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ft_pwfv_handle_digits_1_and_2(str, dict_str, i, digit);
		ft_pwfv_handle_digits_3(str, dict_str, i, digit);
		ft_pwfv_handle_digits_4_and_above(str, dict_str, i, digit);
		i++;
		digit--;
	}
}

void	ft_put_words_from_value(char *str, char *dict_str)
{
	int		i;
	int		digit;
	int		nonzero;

	nonzero = 0;
	i = 0;
	digit = 0;
	while (str[digit] >= '0' && str[digit] <= '9')
	{
		if (str[digit] != '0')
			nonzero = 1;
		digit++;
	}
	if (!nonzero)
	{
		if (ft_find_and_put_value_from_dict("0", dict_str))
			return ;
		else
			write(1, "Dict Error\n", 11);
	}
	ft_put_words_from_value_helper(str, dict_str, i, digit);
}

/*
// debugging
char	*to_str(int i)
{
	char	d1;
	char	d2;
	char	*rtn;
	int		fd;
	int		sz;
	char	*dict_str;
	char	*dict_str;
	int		fd;
	int		sz;
	int		fd;
	int		sz;
	char	*dict_str;

  d1 = (i / 10) + '0';
  d2 = (i % 10) + '0';
  rtn = malloc(sizeof(char) * 3);
  rtn[0] = d1;
  rtn[1] = d2;
  return (rtn);
} */
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

/*
int	main(void)
{
  char *dict_str;
  dict_str = ft_get_dict_str_from_file("numbers.dict");
  unsigned int i = 1362451254;
  char number_str[11];
  while (i <= 1362451256)
  {
	sprintf(number_str, "%d", i);
	ft_put_words_from_value(number_str, dict_str);
	printf("\n");
	i++;
  }
  free(dict_str);
  return (0);
} */
