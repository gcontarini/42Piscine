#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i] != '\0' && r == 0)
	{
		if (s2[i] != '\0')
			r = s1[i] - s2[i];
		else
			r = s1[i];
		i++;
	}
	if (s2[i] != '\0' && r == 0)
		r = -s2[i];
	return (r);
}

void	ft_swap_str(char **argv, int i, int j)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[j];
	argv[j] = tmp;
}

void	printargv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != 0)
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{	
	int	swap;
	int	i;

	if (argc == 1)
		return (0);
	swap = 1;
	while (swap != 0)
	{
		i = 1;
		swap = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap_str(argv, i, i + 1);
				swap++;
			}
			i++;
		}
	}
	printargv(argc, argv);
	return (0);
}
