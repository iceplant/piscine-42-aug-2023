/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:14:10 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 14:26:56 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// n = length of array to display
void	ft_putstr(char *str, int n)
{
	write(1, str, n);
	if (n != 1 || str[0] != '9' ) write(1, ", ", 2);
}

void	ft_initialize_vals(char *vals, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		vals[i] = i + '0';
		i = i + 1;
	}
}

void	ft_last_digit(char *vals, int n)
{
	ft_putstr(vals, n);
	while (vals[n - 1] < '9')
	{
		vals[n - 1] = vals[n - 1] + 1;
		ft_putstr(vals, n);
	}
}

void	ft_print_combn(int n)
{
	char	vals[10];
	int		i;
	char	w;
	int		count;

	count = 0;
	i = n - 1;
	ft_initialize_vals(vals, n);
	while (vals[0] != 9 - n + 1 + '0')
	{
		ft_last_digit(vals, n);
		while (vals[i] == 9 - n + i + 1 + '0')
		{
			i--;
		}
		if (i < 0) {
			return;
		}
		vals[i] = vals[i] + 1;
		while (i < n - 1)
		{
			i++;
			vals[i] = vals[i - 1] + 1;
		}
		count++;
	}
	write(1, vals, n);
}
