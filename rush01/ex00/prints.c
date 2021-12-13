#include <unistd.h>

void	print(int i)
{
	char	p;

	p = i + '0';
	write(1, &p, 1);
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

void	writetable(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			print(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		print(matrix[i][j]);
		write(1, "\n", 1);
		i++;
	}
}
