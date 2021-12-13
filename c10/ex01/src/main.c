#include "ft.h"

int	main(int ac, char **av)
{
	int	i;
	int	fd;

	fd = 3;
	i = 1;
	if (ac == 1)
	{
		fd = 0;
		i = 0;
	}
	while (i < ac)
	{
		errno = 0;
		if (ac != 1 && ft_openf(av[i++]) < 0)
		{
			ft_error_handler(errno, av[i - 1]);
			continue;
		}
		if (ft_read_printf(fd) < 0)
		{
			ft_error_handler(errno, av[i - 1]);
			continue;
		}
		if (ft_closef(fd) < 0)
			ft_error_handler(errno, av[i - 1]);
	}
	return (errno);
}
