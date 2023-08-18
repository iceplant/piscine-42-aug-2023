/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:48:48 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/18 19:03:48 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	(void)argc;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
