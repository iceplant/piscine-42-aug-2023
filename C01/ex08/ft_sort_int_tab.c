/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:23:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 16:44:16 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	has_changed;
	int	*a;
	int	*b;

	i = 0;
	has_changed = 1;
	while (has_changed == 1)
	{
		has_changed = 0;
		while (i < size - 1)
		{
			a = tab + i;
			b = tab + i + 1;
			if (*a > *b)
			{
				ft_swap(a, b);
				has_changed = 1;
			}
			i++;
		}
		i = 0;
	}
}
