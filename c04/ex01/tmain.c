#include <stdio.h>
#include <string.h>

int	ft_putstr(char *str);

int	main(void)
{
	char	str[100];

	strcpy(str, "TESTE");
	printf("%p\n", str);
	ft_putstr(str);
	printf("\n%p", str);
	return (0);
}
