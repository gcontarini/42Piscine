#include <unistd.h>

void	ft_putchar(char c);

char	select_char(int i, int j, int length, int width)
{
	char	printchar;

	printchar = ' ';
	if (((j == 0) || (j == (width - 1))) || ((i == 0) || (i == (length - 1))))
	{
		printchar = '*';
	}
	if (((i == 0) && (j == width - 1)) || ((i == length - 1) && (j == 0)))
	{
		printchar = '\\';
	}
	if (((i == 0) && (j == 0)) || ((i == length - 1) && (j == width - 1)))
	{
		printchar = '/';
	}
	if ((width == 1 && i == length - 1) || (length == 1 && (j == width - 1)))
	{
		printchar = '\\';
	}
	if (width == 1 && length == 1)
	{
		printchar = '/';
	}
	return (printchar);
}

void	rush(int width, int length)
{
	int		i;
	int		j;
	char	printchar;

	i = 0;
	j = 0;
	while (i < length)
	{
		j = 0;
		while (j < width)
		{
			printchar = select_char(i, j, length, width);
			ft_putchar(printchar);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
