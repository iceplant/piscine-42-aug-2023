/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:49:15 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 15:49:57 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const static int	g_int_min = -2147483648;

void	ft_putnbr_base_helper(int nbr, char *base, int base_len)
{
	int	div;
	int	mod;

	if (nbr == 0)
		return ;
	div = nbr / base_len;
	mod = nbr % base_len;
	ft_putnbr_base_helper(div, base, base_len);
	write(1, &base[mod], 1);
}

void	ft_handle_nonpositive(int nbr, char *base, int base_len)
{
	int	div;
	int	mod;

	if (nbr == 0)
	{
		write(1, &base[0], 1);
	}
	else if (nbr == g_int_min)
	{
		div = (-1) * (g_int_min / base_len);
		mod = (-1) * (g_int_min % base_len);
		write(1, "-", 1);
		ft_putnbr_base_helper(div, base, base_len);
		write(1, &base[mod], 1);
	}
	else
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_putnbr_base_helper(nbr, base, base_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	i;

	base_len = 0;
	while (*(base + base_len) != '\0')
	{
		i = 0;
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		while (i < base_len)
		{
			if (base[base_len] == base[i])
				return ;
			i++;
		}
		base_len++;
	}
	if (base_len <= 1)
		return ;
	if (nbr <= 0)
		ft_handle_nonpositive(nbr, base, base_len);
	else
		ft_putnbr_base_helper(nbr, base, base_len);
}
