#include "ft.h"

int	main(int ac, char **av)
{
	int			i;
	char		*bff;

	i = 1;
	if (ac == 1)
		i = 0;
	while (i < ac)
	{
		if (ac == 1)
			bff = ft_read_file("", &bff, 0);
		else
			bff = ft_read_file(av[i], &bff, 3);
		if (bff == 0)
			handler(-1);
		else
		{
			if (program_call(bff) < 0 && bff != 0)
				handler(-1);
		}
		free(bff);
		if (i != ac - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	program_call(char *bff)
{
	t_fheader	header;
	t_sqr		sq;

	return (program(bff, &header, &sq));
}

int	program(char *bff, t_fheader *fh, t_sqr *sq)
{
	char		**cmtx;
	int			**imtx;

	if (read_first_line(bff, fh, 0) < 0)
		return (handler(-2));
	if (get_char_mtx(&cmtx, *fh) == 0)
		return (handler(-1));
	if (get_int_mtx(&imtx, *fh) == 0)
	{
		ft_free_mtx((void ***) &cmtx, *fh);
		return (handler(-1));
	}
	open_mtx_map(&cmtx, bff);
	fill_mtx(&imtx, &cmtx, *fh);
	if (change_sqr(imtx, *fh, sq, 1) < 0)
	{
		ft_free_mtx((void ***) &imtx, *fh);
		ft_free_mtx((void ***) &cmtx, *fh);
		return (handler(-2));
	}
	printf("%d %d %d", sq->x, sq->y, sq->size);
	mark_square(&cmtx, *fh, *sq);
	print_mtx_char(cmtx, *fh);
	ft_free_mtx((void ***) &imtx, *fh);
	ft_free_mtx((void ***) &cmtx, *fh);
	return (0);
}
