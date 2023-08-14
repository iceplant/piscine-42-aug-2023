/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:05:17 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:13 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_alpha(char c)
{
	if ((c >= 'a' && c <=  'z' ) || (c >= 'A'  && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	iter;

	iter = 0;
	while (*(str + iter) != '\0')
	{
		if (ft_is_char_alpha(*(str + iter)) == 0)
			return (0);
		iter++;
	}
	return (1);
}
