int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void add(int a, int b)
{
  ft_putnbr(a + b);
  write(1, "\n", 1);
}

void sub(int a, int b)
{
  ft_putnbr(a - b);
  write(1, "\n", 1);
}

void mult(int a, int b)
{
  ft_putnbr(a * b);
  write(1, "\n", 1);
}

void div(int a, int b)
{
  char *error = "Stop : division by zero\n";
  if (b == 0)
    write(1, error, ft_strlen(error));
  else
  {
    ft_putnbr(a / b);
    write(1, "\n", 1);
  }
}

void mod(int a, int b)
{
  char *error = "Stop : modulo by zero\n";
  if (b == 0)
    write(1, error, ft_strlen(error));
  else
  {
    ft_putnbr(a % b);
    write(1, "\n", 1);
  }
}
