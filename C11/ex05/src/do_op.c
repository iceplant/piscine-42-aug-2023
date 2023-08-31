/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:23:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/31 12:14:31 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	add(int a, int b);
void	sub(int a, int b);
void	mult(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);

void	handle_operators(char op, int a, int b)
{
	void	(*funcs[5])(int x, int y);

	funcs[0] = add;
	funcs[1] = sub;
	funcs[2] = mult;
	funcs[3] = div;
	funcs[4] = mod;
	if (op == '+')
		funcs[0](a, b);
	else if (op == '-')
		funcs[1](a, b);
	else if (op == '*')
		funcs[2](a, b);
	else if (op == '/')
		funcs[3](a, b);
	else if (op == '%')
		funcs[4](a, b);
	else
		write(1, "0\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1)
		handle_operators(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		write(1, "0\n", 1);
}
