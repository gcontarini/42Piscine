#include "ft.h"

int	**get_int_mtx(int ***mtx, t_fheader fh)
{
	int	i;

	*mtx = malloc(fh.lines * sizeof(int *));
	if (!(*mtx))
		return (0);
	i = 0;
	while (i < fh.lines)
	{
		(*mtx)[i] = malloc(fh.cols * sizeof(int));
		if (!(*mtx)[i++])
			return (0);
	}
	return (*mtx);
}

char	**get_char_mtx(char ***mtx, t_fheader fh)
{
	int		i;

	*mtx = malloc(fh.lines * sizeof(char *));
	if (!(*mtx))
		return (0);
	i = 0;
	while (i < fh.lines)
	{
		(*mtx)[i] = malloc(fh.cols * sizeof(char));
		if (!(*mtx)[i++])
			return (0);
	}
	return (*mtx);
}

int	open_mtx_map(char ***mtx, char *bff)
{
	int	i;
	int	j;

	while (*bff != '\n')
		bff++;
	bff++;
	i = 0;
	j = 0;
	while (*bff)
	{
		if (*bff == '\n')
		{
			j = 0;
			i++;
		}
		else
			(*mtx)[i][j++] = *bff;
		bff++;
	}
	return (0);
}

int	fill_mtx(int ***imtx, char ***cmtx, t_fheader fh)
{
	int		i;
	int		j;

	i = 0;
	while (i < fh.lines)
	{
		j = 0;
		while (j < fh.cols)
		{
			if ((*cmtx)[i][j] == fh.emp)
				(*imtx)[i][j] = 1;
			else if ((*cmtx)[i][j] == fh.ob)
				(*imtx)[i][j] = 0;
			j++;
		}
		i++;
	}
	return (0);
}
