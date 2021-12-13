#include "ft.h"

void	print_mtx(int **mtx, t_fheader fh)
{
	int		i;
	int		j;
	char	p;

	i = 0;
	while (i < fh.lines)
	{
		j = 0;
		while (j < fh.cols)
		{
			p = mtx[i][j] + 48;
			write(1, &p, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_mtx_char(char **mtx, t_fheader fh)
{
	int	i;
	int	j;

	i = 0;
	while (i < fh.lines)
	{
		j = 0;
		while (j < fh.cols)
		{
			write(1, &mtx[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
