#include "my_rush.h"
/*
int	main(int ac, char **av)
{
	int		n;

	if (ac == 3)
	{
		n = ft_atoi(*av[2]);
		open(*av[1]);
	}
	if (ac == 2)
	{
		n = ft_atoi(*av[1]);
		open("numbers.dict");
	}
}
*/

#include <stdio.h>

int main(void)
{
	int	fd;
	char	buff[10];

	fd = open("numbers.dict", O_RDONLY);
	printf("%d\n", fd);

	read(fd, buff, 5);
	close(fd);
	printf("%s\n", buff);
	return (0);
}
