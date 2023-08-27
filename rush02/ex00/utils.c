/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:03:54 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/27 18:00:31 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strndup(char *src, int n)
{
	char	*rtn;

	rtn = malloc(n + 1);
	ft_strncpy(rtn, src, n);
	return (rtn);
}

char	*ft_strndup_with_zeros(char *src, int n, int num_zeros)
{
	char	*rtn;
	int		i;

	rtn = malloc(n + num_zeros + 1);
	ft_strncpy(rtn, src, n);
	i = 0;
	while (i < num_zeros)
	{
		rtn[n + i] = '0';
		i++;
	}
	rtn[n + i] = '\0';
	return (rtn);
}

/*
int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}*/

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}
