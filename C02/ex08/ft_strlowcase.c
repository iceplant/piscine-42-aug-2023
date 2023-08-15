/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:14:44 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 17:14:46 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		str[iter] = ft_charlowcase(str[iter]);
		iter++;
	}
	return (str);
}
