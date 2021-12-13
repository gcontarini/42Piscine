#include <unistd.h>

void	printarr(int *arr)
{
	int		i;
	char	p;

	i = 0;
	while (i < 10)
	{
		p = '0' + arr[i];
		write(1, &p, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_valid_queen(int *arr, int col)
{
	int	i;
	int	a;

	i = col - 1;
	a = 1;
	while (i >= 0)
	{
		if (arr[col] == arr[i])
			return (0);
		if (arr[col] == arr[i] - a && arr[i] - a >= 0)
			return (0);
		if (arr[col] == arr[i] + a && arr[i] + a < 10)
			return (0);
		i--;
		a++;
	}
	return (1);
}

int	place_queen(int *arr, int col)
{
	int	i;
	int	tots;

	i = 0;
	tots = 0;
	while (i < 10)
	{
		arr[col] = i;
		if (is_valid_queen(arr, col) == 1)
		{
			if (col == 9)
			{
				printarr(arr);
				tots++;
			}
			else
				tots += place_queen(arr, col + 1);
		}
		i++;
	}
	return (tots);
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		arr[i] = 0;
		i++;
	}
	return (place_queen(arr, 0));
}
