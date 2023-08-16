/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:05:38 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/16 15:45:48 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		iter;
	char	*char_addr;
	int		iter2;
	int		iter3;

	if (size == 0)
		return (0);
	iter = 0;
	char_addr = (char *)addr;
	while (iter < size)
	{
		printf(" %p: ", char_addr + iter);
		iter2 = iter;
		while (iter2 < iter + 16)
		{
			if (iter2 < size)
			{
				printf("%x%x ", char_addr[iter2], char_addr[iter2 + 1]);
			}
			else
			{
				printf("     ");
			}
			iter2 += 2;
		}
		iter3 = iter;
		while (iter3 < iter + 16)
		{
			if (char_addr[iter3] > ' ' && char_addr[iter3] < '~')	
				printf("%c", char_addr[iter3]);
			else printf(".");
			iter3++;
		}
		printf("\n");
		iter += 16;
	}
	return (addr);
}
