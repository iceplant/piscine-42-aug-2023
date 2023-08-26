/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:16:08 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/26 13:54:05 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.c"
#include <unistd.h>
#include "read-file.c"

// TODO
int ft_is_dict_str_formatted_correctly(char *dict_str)
{
  return (1);
}

int ft_is_string_valid(char *num_str)
{
  return (1);
}

char *format_number(char *str)
{
  int i;
  char *rtn;

  i = 0;
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
  {
    i++;
  }
  while (str[i] == '+' || str[i] == '-')
  {
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
    unsigned int n = ft_atoi(num_str);
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
  }

  // check if number is correct and format it
  // i//f (n < 0 || n > 4294967295)
  // write(1, "Error\n", 6);
  num_str = format_number(num_str);
  ft_put_words_from_value(num_str, dict_str);
  write(1, "\n", 1);
}
