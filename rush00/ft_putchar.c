/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:08:13 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/12 17:29:21 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_putchar function from previous C project. Writes given character.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
