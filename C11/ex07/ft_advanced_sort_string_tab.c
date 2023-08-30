/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:49 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 19:47:00 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				ft_str_swap(tab + i, tab + i + 1);
				has_swapped = 1;
			}
			i++;
		}
	}	
}
