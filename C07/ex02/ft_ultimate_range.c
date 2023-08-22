/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:50:19 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/22 12:15:25 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// sizeof(int) = 4
int	*ft_range(int min, int max)
{
	int	*rtn;
	int	l;
	int	i;

	if (min >= max)
		return (NULL);
	l = (max - min);
	rtn = malloc(l * 4);
	if (rtn == NULL)
		return (rtn);
	i = 0;
	while (i + min < max)
	{
		rtn[i] = min + i;
		i++;
	}
	return (rtn);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;

	*range = malloc(sizeof(int *));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = ft_range(min, max);
	if (arr == NULL)
		return (-1);
	*range = ft_range(min, max);
	return (max - min);
}
