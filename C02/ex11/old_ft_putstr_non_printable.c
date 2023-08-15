/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:53:26 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 12:59:04 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_char_hex_code_helper(char c)
{
	int		div;
	int		mod;
	char	last_digit_char;

	if (c == 0)
		return ;
	div = c / 16;
	mod = c % 16;
	if (mod > 9)
		last_digit_char = mod + 'a' - 10;
	else
		last_digit_char = mod + '0';
	ft_write_char_hex_code_helper(div);
	write(1, &last_digit_char, 1);
}

void	ft_write_char_hex_code(char c)
{
	if (c == 0)
		write(1, "0", 1);
	else
	{
		write(1, "\\", 1);
		ft_write_char_hex_code_helper(c);
	}
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
