#include "ft.h"

int	find_sqrs(int **matrix, int i, int j)
{
	if (matrix[i - 1][j - 1] <= matrix[i][j - 1]
			&& matrix[i - 1][j - 1] <= matrix[i - 1][j] >= 1)
		matrix[i][j] = matrix[i - 1][j - 1] + 1;
	else if (matrix[i - 1][j] <= matrix[i][j - 1]
			&& matrix[i - 1][j] <= matrix[i - 1][j - 1])
		matrix[i][j] = matrix[i - 1][j] + 1;
	else
		matrix[i][j] = matrix[i][j - 1] + 1;
	return (0);
}

void	is_max(int i, int j, int **matrix, t_sqr *sq)
{
	sq->x = i;
	sq->y = j;
	sq->size = matrix[i][j];
}

int	exception_sqr(int **matrix, t_sqr *sq, int i)
{
	int	j;

	j = 0;
	if (matrix[i][j] <= 1)
	{
		is_max(i, j, matrix, sq);
	}
	return (0);
}

int	change_sqr(int **matrix, t_fheader fh, t_sqr *sq, int i)
{
	int	j;

	sq->size = 0;
	if (fh.cols == 1)
		exception_sqr(matrix, sq, 0);
	while (i < fh.lines)
	{
		j = 1;
		while (j < fh.cols)
		{
			if (matrix[i - 1][j - 1] >= 1 && matrix[i][j - 1] >= 1
				&& matrix[i - 1][j] >= 1 && matrix[i][j] != 0)
			{
				find_sqrs(matrix, i, j);
				if (matrix[i][j] > sq->size)
					is_max(i, j, matrix, sq);
			}
			else if (matrix[i][j] != 0 && matrix[i][j] > sq->size)
				is_max(i, j, matrix, sq);
			j++;
		}
		i++;
	}
	return (0);
}

int	mark_square(char ***cmtx, t_fheader fh, t_sqr sq)
{
	int	i;
	int	j;

	i = 0;
	while (i < sq.size)
	{
		j = 0;
		while (j < sq.size)
			(*cmtx)[sq.x - i][sq.y - j++] = fh.dw;
		i++;
	}
	return (0);
}
