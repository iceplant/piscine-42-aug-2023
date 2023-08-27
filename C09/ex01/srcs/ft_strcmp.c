/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:20:19 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/14 20:31:58 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1 - s2
int	ft_strcmp(char *s1, char *s2)
{
	int	iter;

	iter = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (s2[0]);
	if (s2 == 0)
		return (s1[0]);
	while (s1[iter] != '\0' && s2[iter] != '\0' && s1[iter] == s2[iter])
	{
		iter++;
	}
	if (s1[iter] == s2[iter])
		return (0);
	if (s1[iter] == '\0')
		return (-1 * s2[iter]);
	if (s2[iter] == '\0')
		return (s1[iter]);
	return (s1[iter] - s2[iter]);
}
