/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:09:38 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 19:43:17 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_str_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	has_swapped;

	has_swapped = 1;
	while (has_swapped)
	{
		has_swapped = 0;
		i = 0;
		while (tab && tab[i] && tab[i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_str_swap(tab + i, tab + i + 1);
				has_swapped = 1;
			}
			i++;
		}
	}
}
