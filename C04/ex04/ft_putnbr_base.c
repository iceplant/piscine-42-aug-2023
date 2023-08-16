/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:49:15 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/16 21:09:13 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len = 0;
	int i;
	while (*(base + base_len) != '\0')
	{
		i = 0;
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		while (i < base_len)
		{
			if (base[base_len] == base[i])
				return;
			i++;
		}
		base_len++;
	}

	if (base_len <= 1)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	ft_putnbr_base_helper(nbr, base, base_len);
}
