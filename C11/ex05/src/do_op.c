/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:23:36 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 19:57:38 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int		ft_atoi(char *str);
// void	ft_putnbr(int nb);

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void handle_valid_operators_with_an_o(char op, int a, int b)
{
  if (op == '+')
    ft_putnbr(a + b);
  else if (op == '-')
    ft_putnbr(a - b);
  else if (op == '*')
    ft_putnbr(a * b);
  else if (op == '/')
  {
    if (b == 0)
      write(1, "Stop : division by zero", 23);
    else
      ft_putnbr(a / b);
  }
  else if (op == '%')
  {
    if (b == 0)
      write(1, "Stop : modulo by zero", 21);
    else
      ft_putnbr(a % b);
  }
  else
    write(1, "0", 1);
}

int main(int argc, char **argv)
{
  if (argc == 4 && ft_strlen(argv[2]) == 1)
    handle_valid_operators_with_an_o(
        argv[2][0],
        ft_atoi(argv[1]),
        ft_atoi(argv[3]));
  else
    write(1, "0", 1);
  write(1, "\n", 1);
}
