/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:51:34 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/31 12:06:02 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_strlen(char *str);

void	add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	mult(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	div(int a, int b)
{
	char	*error;

	error = "Stop : division by zero\n";
	if (b == 0)
		write(1, error, ft_strlen(error));
	else
	{
		ft_putnbr(a / b);
		write(1, "\n", 1);
	}
}

void	mod(int a, int b)
{
	char	*error;

	error = "Stop : modulo by zero\n";
	if (b == 0)
		write(1, error, ft_strlen(error));
	else
	{
		ft_putnbr(a % b);
		write(1, "\n", 1);
	}
}
