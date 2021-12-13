#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int array[4] = {-3, 6, -10, 2};
	int	i = 0;

	ft_sort_int_tab(array, 4);
	while (i < 4)
	{
		printf("%d ", array[i]);
		i++;
	}

	return 0;
}
