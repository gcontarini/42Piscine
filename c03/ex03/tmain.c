#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void	test(char *dest, char *src, unsigned int nb, int t, char *r1)
{
	char	*r2;

	printf("Test %d\n", t);
	r2 = ft_strncat(dest, src, nb);
	printf("Expected: %s\n", r1);
	printf("Result: %s\n", r2);
	if (strcmp(r2, r1) == 0)
		printf("SUCCESS\n");
	else
		printf("INVALID RESULT\n");
	printf("---------------------\n");
}

int	main(void)
{
	char	dest[100];
	char	sdest[5];

	strcpy(dest, "AAA");
	test(dest, "BBBBB", 5, 0, "AAABBBBB");
	test(dest, "CCCCC", 1, 1, "AAABBBBBC");
	test(dest, "", 5, 2, "AAABBBBBC");
	test(dest, "DDD", 10, 3, "AAABBBBBCDDD");
	strcpy(sdest, "AAAA");
	test(sdest, "BBBB", 4, 4, "AAAABBBB");
	return (0);
}
