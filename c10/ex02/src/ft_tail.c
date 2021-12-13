#include "ft.h"
#define BUFF_SIZE 1000

int	ft_readf_all(t_buffer *text, int fd, int lim)
{
	char		buff[BUFF_SIZE];
	int		rc;

	text->begin = 0;
	text->end = 0;
	rc = read(fd, buff, BUFF_SIZE);
	while (rc > 0) 
	{
		if (lim < 0)
			text->begin = ft_append(text, buff, rc);
		else
			text->begin = ft_append_dump(text, buff, rc, lim);
		if (text->begin == 0)
			return (ft_memerror_int());
		rc = read(fd, buff, BUFF_SIZE);
	}
	return (0);
}

int	is_option(char *str)
{
	if (*str != '-')
		return (0);
	if (*(str + 1) != 'c')
		return (ft_illegal_option(*(str + 1)));
	return (1);
}

char	**parse_input(int ac, char **av)
{
	if (ac == 1)
		return (av);
	if (is_option(av[1]) < 0)
		return (0);
	else if (is_option(av[1]) && ft_strlen(av[1]) != 2)
	{
		if (ac > 2)
			return (av + 2);
		return (av + 1);
	}
	else if (is_option(av[1]))
	{
		if (ac > 3)
			return (av + 3);
		return (av + 2);
	}
	return (av + 1);
}

void	parse_options(int ac, char **av, int *fd, int *lim)
{
	*lim = -1;
	*fd = 3;
	if (ac == 1)
	{
		*fd = 0;
		return ;
	}
	if (is_option(av[1]) && ft_strlen(av[1]) != 2)
	{
		*lim = ft_atoi(av[1] + 2);
		if (ac <= 2)
			*fd = 0;
	}
	else if (is_option(av[1]))
	{
		*lim = ft_atoi(av[2]);
		if (ac <= 3)
			*fd = 0;
	}
}

void	ft_print_free(t_buffer *text)
{
	write(1, text->begin, ft_strlen(text->begin));
	free(text->begin);
}
