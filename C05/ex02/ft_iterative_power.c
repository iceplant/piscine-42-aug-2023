/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:24:32 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 19:27:49 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power) {
	rtn = 1;
	if (power < 0) return 0;
	if (power == 0) return 1;
	if (nb == 0) return 0;
	while (power > 0) {
		rtn *= nb;
		power--;
	}	
}
