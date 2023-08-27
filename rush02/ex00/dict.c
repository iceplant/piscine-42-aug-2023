/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:06:29 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/27 16:21:25 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we need write here to output the contents of the dictionary
#include <unistd.h>

int	ft_is_this_line_a_match(char *number, char *line)
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

void	ft_put_word_from_line(char *line)
{
	int	i;

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

int	ft_find_and_put_value_from_dict(char *nb, char *dict_str)
{
	int	i;

	i = 0;
	while (dict_str[i])
	{
		if (i == 0 || dict_str[i - 1] == '\n')
		{
			if (ft_is_this_line_a_match(nb, dict_str + i))
			{
				ft_put_word_from_line(dict_str + i);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

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
