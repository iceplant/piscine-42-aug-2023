/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:01:24 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/14 17:12:09 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man strlcpy says size includes room for dstsize!!!
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;

	offset = 0;
	if (size > 0)
	{
		while (src[offset] != '\0')
		{
			if (offset == size)
			{
				offset--;
				break ;
			}
			dest[offset] = src[offset];
			offset++;
		}
	}
	dest[offset] = '\0';
	while (src[offset] != '\0')
	{
		offset++;
	}
	return (offset);
}
