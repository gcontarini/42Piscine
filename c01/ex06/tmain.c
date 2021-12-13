#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *t = "";

	int len = ft_strlen(t);
	printf("%d", len);
	return 0;
}
