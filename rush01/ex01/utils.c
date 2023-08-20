/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:26:26 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/20 14:56:41 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strstrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		i++;
	}
	return (i);
}

int	check_if_heights_1_through_n(char *heights, int size)
{
	int	values_seen_so_far[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		values_seen_so_far[i] = 0;
		i++;
	}
	i = 0;
	while (i < size)
	{
		values_seen_so_far[heights[i] - '0'] = 1;
		i++;
	}
	i = 1;
	while (i <= size)
	{
		if (values_seen_so_far[i] != 1)
			return (0);
		i++;
	}
	return (1);
}
