/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:58:37 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 17:16:14 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_vals(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2_inner(char a, char b, char c, char d)
{
	while (a <= '9' && b <= '9')
	{
		while (c <= '9' && d <= '9')
		{
			while (d <= '9')
			{
				ft_write_vals(a, b, c, d);
				d = d + 1;
			}
			d = '0';
			c = c + 1;
		}
		if (b < '9')
		{
			b = b + 1;
		}
		else
		{
			b = '0';
			a = a + 1;
		}
		c = (10 * (a - '0') + (b - '0') + 1) / 10 + '0';
		d = (10 * (a - '0') + (b - '0') + 1) % 10 + '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_print_comb2_inner(a, b, c, d);
}
