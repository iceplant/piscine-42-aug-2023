/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:37:12 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/10 19:59:25 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int str_len(char *str) {
	int n;
	n = 0;
	while (str[n] != '\0') {
		n ++;
	}
	return n;
}


void ft_putstr(char *str){
	write(1, str, str_len(str));
}

