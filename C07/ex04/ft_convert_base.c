/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:01:40 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/21 17:37:40 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

const static int	g_int_min = -2147483648;

int					ft_isspace(char c);
int					ft_char_to_val(char c, char *base);
int					ft_check_base(char *base);
long				parse_vals(char *str, int istr, char *base, int base_len);
int					ft_atoi_base(char *str, char *base);

int	ft_nbr_to_base_helper(int nbr, char *base, int base_len, char *rtn)
{
	int	div;
	int	mod;

	if (nbr == 0)
	{
		*rtn = '\0';
		return (0);
	}
	div = nbr / base_len;
	mod = nbr % base_len;
	*rtn = base[mod];
	return (1 + ft_nbr_to_base_helper(div, base, base_len, rtn + 1));
}

int	ft_handle_nonpositive(int nbr, char *base, int base_len, char *rtn)
{
	int	div;
	int	mod;

	if (nbr == 0)
	{
		*rtn = '0';
		return (1);
	}
	else if (nbr == g_int_min)
	{
		div = (-1) * (g_int_min / base_len);
		mod = (-1) * (g_int_min % base_len);
		*rtn = '-';
		*(rtn + 1) = base[mod];
		return (2 + ft_nbr_to_base_helper(div, base, base_len, rtn + 2));
	}
	else
	{
		*rtn = '-';
		nbr *= -1;
		return (1 + ft_nbr_to_base_helper(nbr, base, base_len, rtn + 1));
	}
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		i;
	char	temp;
	char	*a;
	char	*b;

	i = 0;
	while (i < size / 2)
	{
		a = tab + i;
		b = tab + size - i - 1;
		if (a == b)
			continue ;
		temp = *a;
		*a = *b;
		*b = temp;
		i++;
	}
}

char	*ft_nbr_to_base(int nbr, char *base)
{
	int		base_len;
	char	*rtn;
	int		l;

	rtn = malloc(1 * 32);
	base_len = ft_check_base(base);
	if (base_len <= 1)
		return (NULL);
	if (nbr <= 0)
		l = ft_handle_nonpositive(nbr, base, base_len, rtn);
	else
		l = ft_nbr_to_base_helper(nbr, base, base_len, rtn);
	ft_rev_char_tab(rtn, l);
	return (rtn);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;

	num = ft_atoi_base(nbr, base_from);
	return (ft_nbr_to_base(num, base_to));
}
