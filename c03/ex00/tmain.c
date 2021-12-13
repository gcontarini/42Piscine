#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

void	test(char *s1, char *s2, int i, int r1)
{
	int	r2;

	printf("Test %d\n", i);
	r2 = ft_strcmp(s1, s2);
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
	test("ABCD", "ABCD", 0, 0);
	test("ABCD", "ABCE", 1, -1);
	test("ABCE", "ABCD", 2, 1);
	test("abcd", "ABCD", 3, 32);
	test("ABCe", "ABCE", 4, 32);
	test("AAAA", "AAA", 5, 65);
	test("AAA", "AAAA", 6, -65);
	test("A AA", "AA A", 7, -33);
	test("AAA\n", "AAAA", 8, -55);
	test("", "", 9, 0);
	test("AAA", "AAA ", 10, -32);
	test("AA\n", "AAA", 11, -55);
	return (0);
}
