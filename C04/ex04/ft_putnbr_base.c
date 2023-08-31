/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:49:15 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/31 14:20:33 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// const static int	g_int_min = -2147483648;

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
	int	int_min;

	int_min = -2147483648;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
	}
	else if (nbr == int_min)
	{
		div = (-1) * (int_min / base_len);
		mod = (-1) * (int_min % base_len);
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

// returns base length if works correctly
int	ft_check_base(char *base)
{
	int	base_len;
	int	i;

	base_len = 0;
	while (*(base + base_len) != '\0')
	{
		i = 0;
		if (base[base_len] == '+' || base[base_len] == '-'
			|| base[base_len] <= 32 || base[base_len] == 127)
			return (0);
		while (i < base_len)
		{
			if (base[base_len] == base[i])
				return (0);
			i++;
		}
		base_len++;
	}
	return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_check_base(base);
	if (base_len <= 1)
		return ;
	if (nbr <= 0)
		ft_handle_nonpositive(nbr, base, base_len);
	else
		ft_putnbr_base_helper(nbr, base, base_len);
	write(1, "\n", 1);
}
