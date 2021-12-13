#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int		flag;
	char	*t;

	t = "asdaf$";
	flag = ft_str_is_lowercase(t);
	printf("%d\n", flag);
	return (0);
}
