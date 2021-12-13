#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	test(char *dest, char *src, unsigned int size, int t, unsigned int r1, char *r)
{
	unsigned int	r2;

	printf("Test %d\n", t);
	r2 = ft_strlcat(dest, src, size);
	printf("Expected: %d\n", r1);
	printf("Expected s: %s\n", r);
	printf("Result: %d\n", r2);
	if (r1 == r2 && strcmp(dest, r) == 0)
		printf("SUCCESS\n");
	else
		printf("INVALID RESULT\n");
	printf("%s\n", dest);
	printf("---------------------\n");
}

int	main(void)
{
	char	dest[100];
	char	sdest[1];

	test(dest, "AAAAAA", 4, 0, 6, "AAA");
	test(dest, "B", 8, 1, 4, "AAAB");
	test(dest, "CCCCCCCCC", 6, 2, 13, "AAABC");
	test(dest, "AB", 1, 3, 3, "AAABC");
	test(dest, "", 10, 4, 5, "AAABC");
	test(dest, "", 0, 5, 0, "AAABC");
	test(dest, "", 1, 6, 1, "AAABC");
	test(dest, "AFBR", 10, 7, 9, "AAABCAFBR");
	test(dest, "AFBR", 0, 8, 4, "AAABCAFBR");
	test(sdest, "AFBR", 12, 9, 4, "AFBR");
	return (0);
}
