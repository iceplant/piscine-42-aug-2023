/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:44:33 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/13 19:55:51 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	iter;

	iter = 0;
	while (*(str + iter) != '\0')
	{
		if (ft_char_is_lower(*(str + iter)))
			*(str + iter) = *(str + iter) - 32;
		iter++;
	}
	return (str);
}
