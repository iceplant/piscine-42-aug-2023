/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:22:51 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 18:29:20 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// "argument is not valid" => does this mean handle type errors?????
int ft_iterative_factorial(int nb) {
	int total = 1;
	if (nb < 0) return 0;
	if (nb ==0 || nb == 1) return 1;
	while (nb > 1) {
		total *= nb;
		nb--;
	}
	return total;
}
