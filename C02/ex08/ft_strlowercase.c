/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:14:35 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 11:53:32 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charlowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strlowercase(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		str[iter] = ft_charlowercase(str[iter]);
		iter++;
	}
	return (str);
}
