#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	test(char *s1, char *s2, int i, unsigned int n, int r1)
{
	int	r2;

	printf("Test %d\n", i);
	r2 = ft_strncmp(s1, s2, n);
	printf("Expected: %d\n", r1);
	printf("Result: %d\n", r2);
	if (r1 == r2)
		printf("SUCCESS\n");
	else
		printf("INVALID RESULT\n");
	printf("---------------------\n");
}

int	main(void)
{
	test("ABCDD", "ABCD", 0, 4, 0);
	test("ABCD", "ABCE", 1, 3, 0);
	test("ABCE", "ABCD", 2, 4, 1);
	test("abcd", "ABCD", 3, 1, 32);
	test("ABCe", "ABCE", 4, 6, 32);
	test("AAAA", "AAA", 5, 4, 65);
	test("AAA", "AAAA", 6, 4, -65);
	test("A AA", "AA A", 7, 3, -33);
	test("AAA\n", "AAAA", 8, 6, -55);
	test("", "", 9, 1, 0);
	test("", "", 10, 5, 0);
	test("AAA", "AAA ", 11, 2, 0);
	test("AA\n", "AAA", 12, 6, -55);
	return (0);
}
