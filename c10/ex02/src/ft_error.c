#include "ft.h"

int	ft_error_handler(int errnum, char *av)
{
	char	*errmsg;

	errmsg = strerror(errnum);
	write(2, "./ft_tail: ", 11);
	write(2, av, ft_strlen(av));
	write(2, ": ", 2);
	write(2, errmsg, ft_strlen(errmsg));
	write(2, "\n", 1);
	return (errnum);
}

char	*ft_memerror(void)
{
	errno = ENOMEM;
	return (0);
}

int	ft_memerror_int(void)
{
	errno = ENOMEM;
	return (-1);
}

int	ft_illegal_option(char c)
{
	write(2, "./ft_tail: illegal option -- ", 30);
	write(2, &c, 1);
	write(2, "\n", 1);
	write(2, "usage: ./ft_tail [-c #] [file ...]\n", 35);
	return (-1);
}
