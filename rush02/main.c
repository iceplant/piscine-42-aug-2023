/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:16:08 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/27 14:13:00 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.c"
#include <unistd.h>
#include "read-file.c"


int ft_is_digit(char c)
{
	return c >= '0' && c <= '9';
}

int ft_is_printable(char c)
{
	return c >= 32 && c <= 126;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	iter;

	iter = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (s2[0]);
	if (s2 == 0)
		return (s1[0]);
	while (s1[iter] != '\0' && s2[iter] != '\0' && s1[iter] == s2[iter])
	{
		iter++;
	}
	if (s1[iter] == s2[iter])
		return (0);
	if (s1[iter] == '\0')
		return (-1 * s2[iter]);
	if (s2[iter] == '\0')
		return (s1[iter]);
	return (s1[iter] - s2[iter]);
}


// TODO
int ft_is_dict_str_formatted_correctly(char *dict_str)
{
	int i;

	i = 0;
	while (dict_str[i])
	{
		if (!ft_is_digit(dict_str[i]))
				return (0);
		while(ft_is_digit(dict_str[i]))
		{
			i++;
		}
		while (dict_str[i] == ' ')
		{i++;}
		if (dict_str[i] != ':')
			return (0);
		i++;
		while (dict_str[i] == ' ')
		{i++;}
		if (!ft_is_printable(dict_str[i]))
			return (0);
		while (ft_is_printable(dict_str[i]))
		{i++;}
		while (dict_str[i] == '\n')
		{i++;}
	}
  return (1);
}


char *format_number(char *str)
{
  int i;
  char *rtn;
  int neg_count;

  i = 0;
	neg_count = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
  {
    i++;
  }
  while (str[i] == '+' || str[i] == '-')
  {
	  if (str[i] == '-')
		  neg_count++;
    i++;
  }
  rtn = str + i;
  while (str[i] >= '0' && str[i] <= '9')
  {
    i++;
  }
  str[i] = '\0';
  return (rtn);
}

int main(int argc, char **argv)
{
  char *num_str;
  char *dict;
  char *dict_str;
  if (argc == 2)
  {
    num_str = argv[1];
    dict_str = ft_get_dict_str_from_file("numbers.dict");
  }
  else if (argc == 3)
  {
    num_str = argv[1];
    dict_str = argv[2];
    // TODO: check if dict is correctly formatted
  }
  else
  {
    write(1, "Error\n", 6);
	return (0);
  }

  if(!ft_is_dict_str_formatted_correctly(dict_str))
	  write(1, "Dict Error\n", 11);

	num_str = format_number(num_str);
  if (!num_str || ft_strcmp("4294967295", num_str) < 0 )
	  write(1, "Error\n", 6);



	//ft_put_words_from_value(num_str, dict_str);
	//write(1, "\n", 1);
}
