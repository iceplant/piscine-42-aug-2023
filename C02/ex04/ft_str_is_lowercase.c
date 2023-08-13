/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:40:23 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 18:46:43 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c - 'a' >= 0 && 'z' - c <= 25)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	iter;

	iter = 0;
	while (*(str + iter) != '\0')
	{
		if (ft_char_is_lowercase(*(str + iter)) == 0)
			return (0);
		iter++;
	}
	return (1);
}
