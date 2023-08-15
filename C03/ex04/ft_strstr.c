/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:24:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 19:57:24 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_1_starts_with_2(char *str1, char *str2)
{
	int	i;

	if (!str2)
		return (1);
	if (!str1)
		return (0);
	i = 0;
	while (str1[i] != '\0')
	{
		if (str2[i] == '\0')
			return (1);
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (str1[i] == str2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find == 0 || *to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_1_starts_with_2(str + i, to_find))
			return (str + i);
		i++;
	}
	return (0);
}
