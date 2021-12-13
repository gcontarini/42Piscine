#include "ft.h"

t_file	*error_handler_file(int err, char *file)
{
	char	*errmsg;

	errmsg = strerror(err);
	write(2, "./ft_hexdump: ", 14);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	write(2, errmsg, ft_strlen(errmsg));
	write(2, "\n", 1);
	return (0);
}

t_file *set_errno_mem_file()
{
	errno = ENOMEM;
	return (0);
}

char	*set_errno_mem()
{
	errno = ENOMEM;
	return (0);
}

int	set_errno_mem_int()
{
	errno = ENOMEM;
	return (-1);
}

int	set_err_invalid_option(char *arg)
{
	errno = 1;
	write(2, "ft_hexdump: illegal option -- ", 30);
	write(2, arg, ft_strlen(arg));
	write(2, "\n usage: ./ft_hexdump [-C] [file ...]\n", 38);
	return (0);
}
