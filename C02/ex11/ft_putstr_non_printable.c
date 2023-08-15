/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:53:26 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 17:59:03 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	digit_to_hex(int d)
{
	if (d > 9)
		return (d + 'a' - 10);
	else
		return (d + '0');
}

void	ft_write_char_hex_code(char c)
{
	int		divisor;
	int		mod;
	char	d1;
	char	d2;

	divisor = c / 16;
	mod = c % 16;
	d1 = digit_to_hex(divisor);
	d2 = digit_to_hex(mod);
	write(1, "\\", 1);
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, (str + i), 1);
		}
		else
		{
			ft_write_char_hex_code(str[i]);
		}
		i++;
	}
}
