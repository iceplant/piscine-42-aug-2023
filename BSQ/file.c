/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:24:58 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/29 18:56:06 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//needed for malloc
#include <stdlib.h>
// needed for open/read/close file
#include <fcntl.h>
#include <unistd.h>

//forbidden stuff to delete
#include <stdio.h>

char *ft_get_dict_str_from_file(char *filename)
{
  char *dict_str;
  int fd;
  int sz;

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
