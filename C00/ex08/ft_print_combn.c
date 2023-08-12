/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:14:10 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 12:11:49 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

// n = length of array
void	ft_putstr(char *str, int n)
{
	write(1, str, n);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	vals[10];
	int		i;
	char	w;
	int		count;

	count = 0;
	i = 0;
	while (i < n)
	{
		vals[i] = i + '0';
		i = i + 1;
	}
	i = n - 1;
	while (vals[0] != 9 - n + 1 + '0')
	{
		ft_putstr(vals, n);
		while (vals[n - 1] < '9')
		{
			vals[n - 1] = vals[n - 1] + 1;
			ft_putstr(vals, n);
		}
		while (vals[i] == 9 - n + i + 1 + '0')
		{
			i--;
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
