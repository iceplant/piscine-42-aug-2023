/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:08:44 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/29 14:21:27 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*rtn;
	int	i;

	rtn = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		rtn[i] = f(tab[i]);
		i++;
	}
	return (rtn);
}
