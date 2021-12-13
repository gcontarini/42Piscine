#include "ft.h"

int	ft_error_handler(int error)
{
	if (error == 0)
		write(2, "File name missing.\n", 19); 
	else if (error == 1)
		write(2, "Too many arguments.\n", 20); 
	else if (error == 2)
		write(2, "Cannot read file.\n", 18); 
	return (-1);
}
