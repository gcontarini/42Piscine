#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	unsigned int	i;

	if (!range)
		return (-1);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
