/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read-file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:55:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/26 18:31:02 by rokamen-         ###   ########.fr       */
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
  int i;

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

int ft_find_and_put_value_from_dict(char *nb, char *dict_str)
{
  int i;

  i = 0;
  while (dict_str[i])
  {
    if (i == 0 || dict_str[i - 1] == '\n')
    {
      // printf("reached line: %s \n\n and %s \n\n\n\n\n", nb, dict_str + i);
      if (ft_is_this_line_a_match(nb, dict_str + i))
      {
        // printf("Match found!\n");
        ft_put_word_from_line(dict_str + i);
        return (1);
      }
    }
    i++;
  }
  return (0);
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}

void ft_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (src[i] && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

char *ft_strndup(char *src, int n)
{
  char *rtn;

  rtn = malloc(n + 1);
  ft_strncpy(rtn, src, n);
  return (rtn);
}

char *ft_strndup_with_zeros(char *src, int n, int num_zeros)
{
  char *rtn;
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

void ft_put_words_from_value(char *str, char *dict_str)
{
  int i;
  int digit;
  char *to_find;
  int nonzero = 0;

  i = 0;

  digit = 0;
  while (str[digit] >= '0' && str[digit] <= '9')
  {
    if (str[digit] != '0')
      nonzero = 1;
    digit++;
  }
  // printf("digits: %d\n", digit);

  // TODO: handle zero as special case
  if (!nonzero)
  {
    if (ft_find_and_put_value_from_dict("0", dict_str))
      return;
    else
      write(1, "Dict Error\n", 11);
  }

  // TODO: check if entire number is present in dictionary

  if (ft_find_and_put_value_from_dict(str, dict_str))
    return;

  while (str[i] >= '0' && str[i] <= '9')
  {
    // digits are indexing from 1!
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
        // printf("to find: %s\n", to_find);

        ft_find_and_put_value_from_dict(to_find, dict_str);
        if (str[i] != '0' && str[i + 1] != '0')
          write(1, "-", 1);
      }
    }

    if (digit % 3 == 0 && str[i] != '0')
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
    i++;
    digit--;
  }
}

/*
// debugging
char *to_str(int i)
{
  char d1 = (i / 10) + '0';
  char d2 = (i % 10) + '0';
  char *rtn = malloc(sizeof(char) * 3);
  rtn[0] = d1;
  rtn[1] = d2;

  return rtn;
} */

char *ft_get_dict_str_from_file(char *filename)
{
  int fd;
  int sz;
  char *dict_str = (char *)malloc(1000 * sizeof(char));
  fd = open(filename, O_RDONLY);

  if (0 == fd)
  {
    printf("file can't be opened \n");
    return NULL;
  }

  sz = read(fd, dict_str, 100000);
  dict_str[sz] = '\0';
  close(fd);
  return dict_str;
}

/*
int main()
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
  return 0;
} */
