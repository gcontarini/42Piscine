#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

void	test(int nbr, char *base, int t)
{
	printf("TEST %d\n", t);
	printf("%d\n", nbr);
	ft_putnbr_base(nbr, base);
	printf("\n----------\n");
}

int	main(void)
{
	test(123, "abcdefghij", 0);
	test(0, "0123456789", 1);
	test(58796, "0123456789", 2);
	test(58796, "0123456789abcdef", 3);
	test(58796, "01", 4);
	test(58796, "ab", 5);
	test(101, "01", 6);
	test(58796, "ABCDE", 7);
	test(-58796, "ABCDE", 8);
	test(-3, "ABCED", 9);
	test(2147483647, "0123456789", 10);
	test(2147483647, "abcdefghij", 11);
	test(0, "abcdefghij", 12);
	test(-2147483648, "0123456789", 13);
	test(-2147483648, "abcdefghij", 14);
	test(-2147483648, "01", 15);
	test(3, "ABCDE", 16);
	test(58796, "A", 17);
	test(58796, "ABCDEE", 18);
	test(58796, "ABC+EE", 19);
	test(58796, "ABC-EE", 20);
	test(58796, "ABCEA", 21);
	test(-2147483648, "0123456789", 22);
	test(-2147483648, "abcdefghij", 23);
	test(-2147483648, "01", 24);
	return (0);
}
