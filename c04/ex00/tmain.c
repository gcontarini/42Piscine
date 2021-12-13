#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[100];
	int		len;

	strcpy(str, "TESTE");
	len = ft_strlen(str);
	printf("%d\n", len);
	return (0);
}
