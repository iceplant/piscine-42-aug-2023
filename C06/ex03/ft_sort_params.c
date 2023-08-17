/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:08:45 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 17:52:22 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_swap_strs_at_indices(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_write_args(int argc, char **argv){
	int	k;
	k = 0;
	while (k < argc)
	{
		write(1, argv[k], ft_strlen(argv[k]));
		write(1, "\n", 1);
		k++;
	}
}

// argv starts from 1 since we're not considering the current filename!!!
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	to_swap_index;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		to_swap_index = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[to_swap_index], argv[j]) > 0)
				to_swap_index = j;
			j++;
		}
		if (argv[to_swap_index] != argv[i])
			ft_swap_strs_at_indices(argv, i, to_swap_index);
		i++;
	}
	ft_write_args(argc, argv);
	return (0);
}
