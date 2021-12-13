#include "ft.h"

int	check_valid_option(char *str)
{
	if (*str != '-')
		return (0);
	if (*(str + 1) != 'C')
		return (set_err_invalid_option(str));
	if (*(str + 2) != 0)
		return (set_err_invalid_option(str));
	return (1);
}

t_opt	user_input(int ac, char **av)
{
	t_opt	user_opt;

	user_opt.print = 0;
	user_opt.fd = 0;
	if (ac == 1)
		return (user_opt);
	user_opt.fd = 3;
	if (check_valid_option(av[1]))
		user_opt.print = 1;
	if (user_opt.print && ac < 3)
		user_opt.fd = 0;
	return (user_opt);
}

int	main(int ac, char **av)
{
	t_opt	opt;

	errno = 0;
	opt = user_input(ac, av);
	if (!errno && opt.fd)
		hexdump(opt, av);
	else if (!errno)
		hexdump_stdin(opt);
	return (errno);
}
