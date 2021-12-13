#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	l[20];
	char	*u;

	strcpy(l, "Alguma coisa");
	u = ft_strupcase(l);
	printf("%s\n", u);
	return (0);
}
