/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:23:28 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/24 13:23:30 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
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

char	*ft_strdup(char *src)
{
	int		l;
	char	*rtn;

	l = ft_strlen(src);
	rtn = malloc(l + 1);
	if (rtn == NULL)
		return (NULL);
	ft_strcpy(rtn, src);
	return (rtn);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*rtn;

	i = 0;
	rtn = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (rtn == NULL)
		return (NULL);
	while (i < ac)
	{
		rtn[i].size = ft_strlen(av[i]);
		rtn[i].str = av[i];
		rtn[i].copy = ft_strdup(av[i]);
		i++;
	}
	rtn[i].size = 0;
	rtn[i].str = 0;
	rtn[i].copy = 0;
	return (rtn);
}
