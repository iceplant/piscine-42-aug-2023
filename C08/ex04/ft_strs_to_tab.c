#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*rtn;

	l = ft_strlen(src);
	rtn = malloc(l + 1);
	if (rtn == NULL)
		return (NULL);
	ft_strcpy(rtn, src);
	return (rtn);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*rtn;

	i = 0;
	rtn = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (rtn == NULL)
		return (NULL);
	while (i < ac)
	{
		// rtn[i] = (struct s_stock_str)malloc(sizeof(t_stock_str));
		// if (rtn[i] == NULL)
		// return (NULL);
		rtn[i].size = ft_strlen(av[i]);
		rtn[i].str = av[i];
		rtn[i].copy = ft_strdup(av[i]);
		i++;
	}
	// my_struct = malloc(sizeof(t_stock_str));
	rtn[i].size = 0;
	rtn[i].str = 0;
	rtn[i].copy = 0;
	return (rtn);
}
