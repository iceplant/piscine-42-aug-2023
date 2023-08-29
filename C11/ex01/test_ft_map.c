/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:11:25 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/29 14:14:09 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.c"
#include <stdio.h>

int	ft_increment(int nb)
{
	return (nb + 1);
}

int main(void)
{
	int test[] = {1, 2, 3};
	int *result = ft_map(test, 3, &ft_increment);
	int i = 0;
	while (i < 3)
	{
		printf("%d\n", result[i]);
		i++;
	}
}
