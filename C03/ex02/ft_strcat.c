/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:10:11 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 19:14:27 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src) {
	int diter;
	int siter;
	diter = 0;
	siter = 0;
	while(dest[diter] != '\0') {diter++;}
	while(src[siter] != '\0') {
		dest[diter] = src[siter];
		diter++;
		siter++;
	}
	dest[diter] = '\0';
	return dest;
}
