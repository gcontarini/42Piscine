#include "ft.h"

int	main(int ac, char **av)
{
	int		fd;
	int		lim;
	int		i;
	char		**files;
	t_buffer	bff;

	files = parse_input(ac, av);
	i = 0;
	while (files && files[i])
	{
		parse_options(ac, av, &fd, &lim);
		errno = 0;
		if (fd != 0 && open(files[i], O_RDONLY) < 0)
			ft_error_handler(errno, files[i]);
		if (errno == 0 && ft_readf_all(&bff, fd, lim) < 0)
			ft_error_handler(errno, files[i]);
		if (errno == 0)
			ft_print_free(&bff);
		if (errno == 0 && close(fd) < 0)
			ft_error_handler(errno, files[i]);
		i++;
	}
	return (errno);
}
