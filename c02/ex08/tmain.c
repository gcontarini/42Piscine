#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	l[20];
	char	*u;

	strcpy(l, "ALGUMA COISA!.");
	u = ft_strlowcase(l);
	printf("%s\n", u);
	return (0);
}
