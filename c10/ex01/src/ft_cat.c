#include "ft.h"
#define BUFF_SIZE 30

int	ft_openf(char *file)
{
	if (open(file, O_RDONLY) < 0)
		return (-2);
	return (0);
}

int	ft_read_printf(int fd)
{
	char	buff[BUFF_SIZE];
	int	rc;

	rc = 1;
	while (rc > 0) 
	{
		rc = read(fd, buff, BUFF_SIZE);
		if (rc < 0)
			return (-2);
		write(1, buff, rc);
	}
	return (0);
}

int	ft_closef(int fd)
{
	if (close(fd) < 0)
		return (-1);
	return (0);
}
