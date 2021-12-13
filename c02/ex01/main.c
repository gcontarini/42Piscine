#include <string.h>
#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n);


int main(void)
{
	char src[20] = "HELLO MY FRIENDAAAAA";
	char dest[10];

	printf("%s\n", src);
	printf("%s\n", strncpy(dest, src, 10));
	strcpy(dest, "");
	printf("%s\n", ft_strncpy(dest, src, 10));
	return 0;
}
