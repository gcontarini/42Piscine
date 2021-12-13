#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int		flag;
	char	*t;

	t = "";
	flag = ft_str_is_numeric(t);
	printf("%d\n", flag);
	return (0);
}
