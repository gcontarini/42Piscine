#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	d[1];
	char	s[10];
	int		len;

	strcpy(s, "Um texto");
	len = ft_strlcpy(d, s, 9);
	printf("%s\n", d);
	printf("%d", len);
	return (0);
}
