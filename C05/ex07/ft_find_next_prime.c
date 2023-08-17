/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:24:27 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 21:30:20 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// how do we handle negatives?
int ft_is_prime(int nb) {
	if (nb < 0) return ft_is_prime(-1 * nb);
	if (nb == 0 || nb == 1) return 0;
	int i = 2;
	while (i*i <= nb) {
		if (nb % i == 0) return 0;
		i++;
	}
	return 1;
}

int ft_find_next_prime(int nb) {
	while(!ft_is_prime(nb)){
		nb++;
	}
	return nb;
}
	
