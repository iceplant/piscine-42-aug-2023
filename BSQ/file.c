/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:24:58 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 16:14:20 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// needed for malloc
#include <stdlib.h>
// needed for open/read/close file
#include <fcntl.h>
#include <unistd.h>

// forbidden stuff to delete
#include <stdio.h>

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

char	*error(void)
{
	write(1, "map error\n", 5);
	return (NULL);
}

int	get_size(char *filename)
{
	int		fd;
	int		size;
	char	*buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = 1;
	buffer = (char *)malloc(size * sizeof(char));
	if (!buffer)
		return (0);
	while (read(fd, buffer, size) != 0)
	{
		free(buffer);
		size += size;
		buffer = (char *)malloc(size * sizeof(char));
		if (!buffer)
			return (0);
	}
	close(fd);
	free(buffer);
	return (size);
}

char	*get_file_data(char *filename)
{
	int		fd;
	int		size;
	char	*buffer;

	size = get_size(filename);
	buffer = (char *)malloc(size * sizeof(char));
	if (!buffer)
		return (error());
	fd = open(filename, O_RDONLY);
	read(fd, buffer, size);
	return (buffer);
}
