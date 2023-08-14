/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:36:56 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/14 16:49:57 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	iter;

	iter = 0;
	while (*(str + iter) != '\0')
	{
		if (ft_char_is_printable(*(str + iter)) == 0)
			return (0);
		iter++;
	}
	return (1);
}
