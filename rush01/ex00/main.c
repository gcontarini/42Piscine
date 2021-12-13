#include <stdlib.h>

int		ft_error(void);
int		ft_checktable(char *str);
int		*ft_cpyarr(char *str);
int		gen_line(int **mtx, int table[16], int par[4]);
int		**gen_mtx(int i, int j, int k, int e);
void	populate_arr(int *arr);

int	main(int argc, char **argv)
{
	int	*table;
	int	**mtx;
	int	arr[4];

	populate_arr(arr);
	if (argc != 2)
		return (ft_error());
	if (ft_checktable(argv[1]) != 16)
		return (ft_error());
	table = ft_cpyarr(argv[1]);
	mtx = gen_mtx(0, 0, 0, 0);
	if (gen_line(mtx, table, arr) == 0)
	{
		free(mtx);
		free(table);
		return (ft_error());
	}
	free(mtx);
	free(table);
	return (0);
}
