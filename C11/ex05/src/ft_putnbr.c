/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:16:51 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/31 11:55:41 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

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
