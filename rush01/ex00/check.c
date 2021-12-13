#include <stdlib.h>

int	*ft_rev(int arr[4]);
int	*ft_cpycol(int mtx[4][4], int cnb);

int	ft_checktable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	if (i != 31)
		return (0);
	i = 0;
	while (*str)
	{
		if ((*str < '1' || *str > '4') && *str != ' ')
			return (0);
		if (*str >= '1' && *str <= '4')
			i++;
		str++;
	}
	return (i);
}

int	check_seq(int *arr, int a)
{
	int	i;
	int	start;
	int	c;

	i = 1;
	c = 1;
	start = 0;
	while (start < 3 && *arr != 4)
	{
		if (*arr < *(arr + i))
		{
			arr = arr + i;
			i = 1;
			c++;
		}
		else
			i++;
		start++;
	}
	if (c != a)
		return (0);
	return (1);
}

int	check_line(int a, int b, int *line)
{
	int	*inv_line;

	if (check_seq(line, a) == 0)
		return (0);
	inv_line = ft_rev(line);
	if (check_seq(inv_line, b) == 0)
	{
		free(inv_line);
		return (0);
	}
	free(inv_line);
	return (1);
}

int	check_scol(int	*col)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	while (i < 4)
	{
		sum += col[i];
		i++;
	}
	if (sum == 10)
		return (1);
	return (0);
}

int	ft_check_matrix(int mtx[4][4], int table[16])
{
	int	i;
	int	*col;

	i = 8;
	while (i < 12)
	{
		if (check_line(table[i], table[i + 4], mtx[i - 8]) == 0)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		col = ft_cpycol(mtx, i);
		if (check_line(table[i], table[i + 4], col) == 0
			|| check_scol(col) == 0)
		{
			free(col);
			return (0);
		}
		free(col);
		i++;
	}
	return (1);
}
