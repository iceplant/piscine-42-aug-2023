/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:36:00 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/15 13:31:32 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*
 *From examples, I assume this function shoudl capitalize every alphanumeric
 *character succceeding a non-alphanumeric character
 *
 *C does lazy evaluation so the || statement is oke
 *
 **/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lowercase(str[i]))
		{
			if (i == 0 || !ft_is_alphanumeric(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
