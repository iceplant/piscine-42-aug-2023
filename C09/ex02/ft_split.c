/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:56:12 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/28 16:21:39 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// str must be a pointer to start of word
int	ft_get_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_is_separator(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iter;

	iter = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[iter] != '\0' && iter < n)
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	while (iter < n)
	{
		*(dest + iter) = '\0';
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
}

//sizeof(char *) = 8
char	**ft_split(char *str, char *charset)
{
	int		istr;
	char	**rtn;
	int		irtn;

	istr = 0;
	irtn = 0;
	rtn = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (rtn == NULL)
		return (NULL);
	while (str[istr])
	{
		if (!ft_is_separator(str[istr], charset) && (istr == 0
				|| ft_is_separator(str[istr - 1], charset)))
		{
			rtn[irtn] = malloc(8 * (ft_get_word_len(str + istr, charset) + 1));
			if (!rtn[irtn])
				return (NULL);
			ft_strncpy(rtn[irtn], str + istr, (unsigned)ft_get_word_len(str
					+ istr, charset));
			irtn++;
		}
		istr++;
	}
	rtn[irtn] = 0;
	return (rtn);
}
