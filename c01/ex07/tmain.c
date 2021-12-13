#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int	size;
	size = 6;
	int	array[6] = {1, 42, 34, 0, 100, 10000};

	i = 0;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	return 0;
}
