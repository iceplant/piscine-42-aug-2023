/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:42:24 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/22 12:40:04 by rokamen-         ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_get_rtn_len_of_strs_and_seps(int size, char **strs, char *sep)
{
	int	i;
	int	strs_char_count;
	int	rtn_len;

	if (size == 0)
		return (0);
	i = 0;
	strs_char_count = 0;
	while (i < size)
	{
		strs_char_count += ft_strlen(strs[i]);
		i++;
	}
	rtn_len = (strs_char_count + (size - 1) * ft_strlen(sep));
	return (rtn_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*rtn;
	int		rtn_len;

	i = 0;
	j = 0;
	rtn_len = ft_get_rtn_len_of_strs_and_seps(size, strs, sep);
	rtn = malloc(1 * rtn_len + 1);
	while (i < size)
	{
		ft_strcpy(rtn + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			ft_strcpy(rtn + j, sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	rtn[rtn_len] = '\0';
	return (rtn);
}
