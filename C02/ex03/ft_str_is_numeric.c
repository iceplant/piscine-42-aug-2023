/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:52:53 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 19:08:36 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c - '0' >= 0 && c - '9' <= 0)
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	iter;

	iter = 0;
	while (*(str + iter) != '\0')
	{
		if (ft_char_is_numeric(*(str + iter)) == 0)
			return (0);
		iter++;
	}
	return (1);
}
