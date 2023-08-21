/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:51:43 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/21 12:01:35 by rokamen-         ###   ########.fr       */
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
	i = 0;
	while (i + min < max)
	{
		rtn[i] = min + i;
		i++;
	}
	return (rtn);
}
