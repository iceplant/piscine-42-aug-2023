#include "ft_strs_to_tab.c"

int main(int argc, char **argv)
{
  int i;
  struct s_stock_str *structs;

  structs = ft_strs_to_tab(argc, argv);
  i = 0;
  while (i <= argc)
  {
    printf("%d\n", i);
    printf("original : %s addess:  %p\n", structs[i].str, structs[i].str);
    printf("copy: %s address:  %p\n", structs[i].copy, structs[i].copy);
    printf("size : %d\n", structs[i].size);
    i++;
  }
}
