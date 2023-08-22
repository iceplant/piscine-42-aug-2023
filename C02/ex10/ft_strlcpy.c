/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:01:24 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 14:14:03 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man strlcpy says size includes room for dstsize!!!
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;
	unsigned int	rtn;

	offset = 0;
	if (size > 0)
	{
		while (src[offset] != '\0' && offset < size - 1)
		{
			dest[offset] = src[offset];
			offset++;
		}
	}
	dest[offset] = '\0';
	rtn = offset;
	while (src[offset] != '\0')
	{
		offset++;
	}
	return (rtn);
}
