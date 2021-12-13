#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

void	test(char *str, char *base, int t)
{
	int	re;

	printf("TEST %d\n", t);
	printf("%s\n", str);
	printf("%s\n", base);
	re = ft_atoi_base(str, base);
	printf("%d\n", re);
	printf("----------\n");
}

int	main(void)
{
	test("     \t   ++++---furry", "fury", 0);
	test(" ---+12356", "0123456789", 1);
	test(" ---+101010101010000", "01", 2);
	test(" \t+abababababababababb", "ab", 3);
	test("+++--ab", "ab", 4);
	test("++++----0", "01", 5);
	test(" ++--cba", "abcdefghij", 6);
	test(" ++---abbdf", "0123456789abcdef", 7);
	test(" ++---bbababababa", "ab", 7);
	test(" ++---11010101010", "01", 8);
	test(" ++---110101010103", "01", 9);
	test(" ++---110101010103", "011", 10);
	test(" ++---110101010103", "01-", 11);
	test(" ++---110101010103", "01+", 12);
	test(" ++---11010101010a", "01", 13);
	test(" ++--- 11010101010a", "01", 14);
	return (0);
}
