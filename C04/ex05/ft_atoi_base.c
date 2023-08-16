/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:15:29 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/16 22:12:49 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

// returns -1 if value is not found in base
int ft_char_to_val(char c, char *base) {
	int i = 0;
	while (base[i] != '\0') {
		if (base[i] == c) {
			return i;
		}
		i++;
	}
	return -1;
}

	

//process base: get its length, check for forbidden chars (+- ), check for repeated chars

int ft_check_base(char *base) {
	int base_len;
	int ibase;
	base_len = 0;
	while (*(base + base_len) != '\0')
	{
		//printf("base_len: %d\n", base_len);
		ibase = 0;
		if ((base[base_len] == '+' || base[base_len] == '-') || base[base_len] == ' ')
			return (-1);
		while (ibase < base_len - 1)
		{
		//	printf("inner loop\n");
			if (base[base_len] == base[ibase]) {
				printf("reached inner inner block");
				return (-1);
			}
			ibase++;
		}
		//printf("reached past inner loop");
		base_len++;
	}
	//printf("reached past base loop");
	return (base_len);
}


int ft_atoi_base(char *str, char *base) {
	int	istr;
	int	sign;
	int	so_far;

	istr = 0;
	//check str for whitespace
	while (ft_isspace(str[istr]))
	{
		istr++;
	}
	sign = 1;
	// account for leading signs on str
	while (str[istr] == '-' || str[istr] == '+')
	{
		if (str[istr] == '-')
			sign *= -1;
		istr++;
	}

	int base_len;
	base_len = ft_check_base(base);
	if (base_len == -1) return (0);
	
	
	so_far = 0;
	// convert to int
	while (ft_char_to_val(str[istr], base) != -1 && str[istr] != '\0')
	{
		printf("%c", str[istr]);
		so_far *= base_len;
		so_far += ft_char_to_val(str[istr], base);
		istr++;
	}
	
	so_far *= sign;
	return (so_far);
}
