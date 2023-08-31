/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:10:00 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/16 20:48:11 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	so_far;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	so_far = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		so_far *= 10;
		so_far += str[i] - '0';
		i++;
	}
	so_far *= sign;
	return ((int)so_far);
}
