#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str);

void	test(char *str, int t, int ex)
{
	int	re;

	re = ft_atoi(str);
	printf("TEST %d\n", t);
	printf("Expected %d\n", ex);
	printf("Result %d\n", re);
	if (ex == re)
		printf("SUCCESS\n");
	else
		printf("INVALID\n");
	printf("----------\n");
}

int	main(void)
{
	test(" asdadsafg", 0, 0);
	test("", 1, 0);
	test("\x0b+++fdsfsd1231", 2, 0);
	test("   \x0a --1245  1235", 3, 1245);
	test("++--++-----567  1231dsadg ", 4, -567);
	test("   +-+-+-+1567889684", 5, -1567889684);
	test("   ++----++   12315", 6, 0);
	test("++++--2147483647", 7, 2147483647);
	test("-2147483648", 8, -2147483648);
	test(" ---++++---0", 9, 0);
	test(" ---++++---654adasg1231", 10, 654);
	return (0);
}
