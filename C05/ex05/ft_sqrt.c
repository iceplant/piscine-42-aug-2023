/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:01:38 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/17 21:16:50 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// assuming negatives can return as 0 too....
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}