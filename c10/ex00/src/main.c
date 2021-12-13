#include "ft.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (ft_error_handler(0));
	if (ac > 2)
		return (ft_error_handler(1));
	if (ft_openf(av[1]) < 0)
		return (ft_error_handler(2));
	if (ft_read_printf(3) < 0)
		return (ft_error_handler(2));
	if (ft_closef(3) < 0)
		return (ft_error_handler(2));
	return (0);
}
