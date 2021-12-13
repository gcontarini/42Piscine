#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	test(char *haystack, char *needle, int t, char *r1)
{
	char	*r2;

	printf("Test %d\n", t);
	r2 = ft_strstr(haystack, needle);
	printf("Expected: %s\n", r1);
	printf("Result: %s\n", r2);
	if (r1 == 0 && r2 == 0)
		printf("SUCCESS\n");
	else
	{
		if (strcmp(r2, r1) == 0)
			printf("SUCCESS\n");
		else
			printf("INVALID RESULT\n");
	}
	printf("---------------------\n");
}

int	main(void)
{
	char	haystack[100];

	strcpy(haystack, "AAAATESTEAAA");
	test(haystack, "TESTE", 0, "TESTEAAA");
	test(haystack, "", 1, "AAAATESTEAAA");
	test(haystack, "BBB", 2, 0);
	test(haystack, "BTESTEB", 3, 0);
	test(haystack, "TESTEB", 4, 0);
	test(haystack, "EST", 5, "ESTEAAA");
	strcpy(haystack, "AAAAA B TESTE B OUTRO");
	test(haystack, "B", 6, "B TESTE B OUTRO");
	test(haystack, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 7, 0);
	return (0);
}
