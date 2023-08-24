#include "ft_show_tab.c"
#include "ft_strs_to_tab.c"


int main(int argc, char **argv)
{
	//printf("Union power!");
 
  struct s_stock_str *structs;

  structs = ft_strs_to_tab(argc, argv);
  
  ft_show_tab(structs);
  free(structs);

  return (0);
  
}
