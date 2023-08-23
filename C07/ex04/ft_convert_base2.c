/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:19:24 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/22 19:34:18 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

// returns -1 if value is not found in base
int	ft_char_to_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

// process base: get its length, check for forbidden chars (+- ),
//	check for repeated chars

int	ft_check_base(char *base)
{
	int	base_index;
	int	ibase;

	base_index = 0;
	while (*(base + base_index) != '\0')
	{
		ibase = 0;
		if ((base[base_index] == '+' || base[base_index] == '-')
			|| base[base_index] <= ' ' || base[base_index] >= 127)
			return (-1);
		while (ibase < base_index - 1)
		{
			if (base[base_index] == base[ibase])
			{
				return (-1);
			}
			ibase++;
		}
		base_index++;
	}
	return (base_index);
}

long	parse_vals(char *str, int istr, char *base, int base_len)
{
	long	so_far;

	so_far = 0;
	while (ft_char_to_val(str[istr], base) != -1 && str[istr] != '\0')
	{
		so_far *= (long)base_len;
		so_far += (long)ft_char_to_val(str[istr], base);
		istr++;
	}
	return (so_far);
}

int	ft_atoi_base(char *str, char *base)
{
	int		istr;
	int		sign;
	long	so_far;
	int		base_len;

	istr = 0;
	sign = 1;
	while (ft_isspace(str[istr]))
	{
		istr++;
	}
	while (str[istr] == '-' || str[istr] == '+')
	{
		if (str[istr] == '-')
			sign *= -1;
		istr++;
	}
	base_len = ft_check_base(base);
	if (base_len <= 1)
		return (0);
	so_far = parse_vals(str, istr, base, base_len);
	so_far *= (long)sign;
	return (so_far);
}