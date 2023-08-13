/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:09:40 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 16:32:07 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *ft_strcpy(char *dest, char *src) {
	int iter;
	iter = 0;
	
	while (src[iter] != '\0') {
		*(dest + iter) = *(src + iter);
		iter++;
	}
	*(dest + iter) = '\0';
	return dest;
}

