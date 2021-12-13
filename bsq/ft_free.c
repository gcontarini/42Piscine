#include "ft.h"

void	ft_free_mtx(void ***mtx, t_fheader fh)
{
	int	i;

	i = 0;
	while (i < fh.lines)
	{
		free((*mtx)[i]);
		i++;
	}
	free(*mtx);
}
