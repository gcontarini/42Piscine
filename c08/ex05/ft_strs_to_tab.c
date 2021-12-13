#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*cpy;

	len = ft_strlen(str);
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (0);
	while (*str)
		*cpy++ = *str++;
	*cpy = 0;
	return (cpy - len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	t_stock_str	curr;
	int			i;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		 return (0);
	i = 0;
	while (i++ < ac)
	{
		curr.size = ft_strlen(*av);
		curr.str = *av;
		curr.copy = ft_strdup(*av);
		if (!curr.copy)
			return (0);
		*arr = curr;
		av++;
		arr++;
	}
	curr.str = 0;
	*arr = curr;
	return (arr - ac);
}
