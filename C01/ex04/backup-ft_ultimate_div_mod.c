/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:46:55 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/10 18:46:14 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b){
	int div;
	int mod;
	div = a / b;
	mod = a % b;
	*a = div;
	*b = mod;	
}
