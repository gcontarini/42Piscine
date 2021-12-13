#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_error_handler(int errnum, char *av)
{
	char	*errmsg;

	errmsg = strerror(errnum);
	write(2, "./ft_cat: ", 10);
	write(2, av, ft_strlen(av));
	write(2, ": ", 2);
	write(2, errmsg, ft_strlen(errmsg));
	write(2, "\n", 1);
	return (errnum);
}

