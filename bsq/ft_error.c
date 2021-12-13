#include "ft.h"

int	handler(int type)
{
	if (type == 0 || type == -1)
	{
		write(1, "memory error\n", 13);
		return (-1);
	}
	else if (type == -2)
	{
		write(1, "map error\n", 10);
		return (-2);
	}
	return (0);
}
