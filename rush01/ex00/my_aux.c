#include <stdlib.h>

int	*ft_cpyarr(char *str)
{
	int	*arr;
	int	*r;

	r = malloc(16 * sizeof(int));
	arr = r;
	while (*str != 0)
	{
		if (*str != ' ')
		{
			*arr = *str - '0';
			arr++;
		}
		str++;
	}
	return (r);
}

int	*ft_rev(int arr[4])
{
	int	*iarr;
	int	i;
	int	j;

	iarr = malloc(4 * sizeof(int));
	i = 0;
	j = 3;
	while (i < j)
	{
		iarr[i] = arr[j];
		iarr[j] = arr[i];
		i++;
		j--;
	}
	return (iarr);
}

int	*ft_cpycol(int mtx[4][4], int cnb)
{
	int	*col;
	int	i;

	col = malloc(4 * sizeof(int));
	i = 0;
	while (i < 4)
	{
		col[i] = mtx[i][cnb];
		i++;
	}
	return (col);
}

void	populate_arr(int *arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = 0;
		i++;
	}
}
