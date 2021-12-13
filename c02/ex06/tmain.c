#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*t;
	int		flag;

	t = "\x1\x6\x1d";
	flag = ft_str_is_printable(t);
	printf("%d\n", flag);
	return (0);
}
