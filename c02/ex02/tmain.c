#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int		flag;
	char	*t;

	t = "aaaaaaaa";
	flag = ft_str_is_alpha(t);
	printf("%d\n", flag);
	return (0);
}
