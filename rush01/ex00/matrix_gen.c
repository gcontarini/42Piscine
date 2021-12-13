#include <stdlib.h>
#include <stdio.h>

int		ft_check_matrix(int mtx[4][4], int table[16]);
void	writetable(int matrix[4][4]);
int		make_line(int **mtx, int table[16], int par[4]);
int		*make_mtx(int i, int j, int k, int e);

int	**gen_mtx(int i, int j, int k, int e)
{
	int	**mtx;

	mtx = malloc(24 * sizeof(int *));
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			k = 0;
			while (k++ < 4)
			{
				e = 0;
				while (e++ < 4)
				{
					if (i != j && j != k && k != i
						&& e != i && e != j && e != k)
					{
						*mtx = make_mtx(i - 1, j - 1, k - 1, e - 1);
						mtx++;
					}
				}
			}
		}
	}
	return (mtx - 24);
}

int	*make_mtx(int i, int j, int k, int e)
{
	int	arr[4];
	int	*line;
	int	a;

	a = 0;
	while (a < 4)
	{
		arr[a] = a + 1;
		a++;
	}
	line = (int *) malloc(4 * sizeof(int));
	line[0] = arr[i];
	line[1] = arr[j];
	line[2] = arr[k];
	line[3] = arr[e];
	return (line);
}

int	gen_line(int **mtx, int table[16], int par[4])
{
	while (par[0] < 24)
	{
		par[1] = 0;
		while (par[1] < 24)
		{
			par[2] = 0;
			while (par[2] < 24)
			{
				par[3] = 0;
				while (par[3] < 24)
				{
					if (make_line(mtx, table, par) == 1)
					{
						return (1);
					}
					par[3]++;
				}
				par[2]++;
			}
			par[1]++;
		}
		par[0]++;
	}
	return (0);
}

int	make_line(int **mtx, int table[16], int par[4])
{
	int	c;
	int	fin[4][4];

	if (par[0] != par[1] && par[1] != par[2] && par[2] != par[0]
		&& par[3] != par[0] && par[3] != par[1] && par[3] != par[2])
	{	
		c = 0;
		while (c < 4)
		{
			fin[0][c] = mtx[par[0]][c];
			fin[1][c] = mtx[par[1]][c];
			fin[2][c] = mtx[par[2]][c];
			fin[3][c] = mtx[par[3]][c];
			c++;
		}
		if (ft_check_matrix(fin, table) == 1)
		{
			writetable(fin);
			return (1);
		}
	}
	return (0);
}
