/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:45:56 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/14 16:24:01 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iter;

	iter = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[iter] != '\0')
	{
		if (iter < n)
			*(dest + iter) = *(src + iter);
		else
			*(dest + iter) = '\0';
		iter++;
	}
	*(dest + iter) = '\0';
	return (dest);
}
