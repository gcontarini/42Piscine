#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	t_stock_str	*arr;
	char		**dp;

	dp = malloc(2 * sizeof(char *));
	*dp = strdup("UM TEXTO 123456");
	*(dp + 1) = strdup("UM TEXTO");
	arr = ft_strs_to_tab(2, dp);
	while (arr->str != 0)
	{
		printf("%d\n", arr->size);
		printf("%s\n", arr->str);
		printf("%s\n", arr->copy);
		arr++;
	}
	free(*(dp + 1));
	free(*dp);
	free(dp);
	free((arr - 2)->copy);
	free((arr - 1)->copy);
	//free(arr->copy);
	free(arr - 2);
	return (0);
}
