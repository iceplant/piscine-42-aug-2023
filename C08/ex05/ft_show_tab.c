/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:24:59 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/24 17:31:01 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_putnbr_helper(int nb)
{
	int		digit;
	char	c;

	if (nb == 0)
	{
		return ;
	}
	c = '0';
	digit = nb % 10;
	c = digit + '0';
	nb = (nb - digit) / 10;
	ft_putnbr_helper(nb);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr_helper(147483648);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	ft_putnbr_helper(nb);
}

void	ft_show_one_tab(struct s_stock_str *s)
{
	ft_putstr(s->str);
	write(1, "\n", 1);
	ft_putnbr(s->size);
	write(1, "\n", 1);
	ft_putstr(s->copy);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->size != 0)
	{
		ft_show_one_tab(par);
		par++;
	}
}
