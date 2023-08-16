/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:19:33 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/16 13:53:34 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	diter;
	unsigned int	siter;

	diter = 0;
	siter = 0;
	while (dest[diter] != '\0')
	{
		diter++;
	}
	while (src[siter] != '\0' && siter < nb)
	{
		dest[diter] = src[siter];
		diter++;
		siter++;
	}
	dest[diter] = '\0';
	return (dest);
}
