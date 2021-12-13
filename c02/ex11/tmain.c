#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

void	test(char *str, int i)
{
	printf("Test %d\n", i);
	ft_putstr_non_printable(str);
	printf("\n");
}

void	test2()
{
	char	s[5] = {-128, 32, -5, 32};

	ft_putstr_non_printable(s);
}

int	main(void)
{	
	test("teste", 1);
	test("issoeoutroteste", 2);
	test("teste\n", 3);
	test("teste\x01", 4);
	test("", 5);
	test("\x09\x0a\x0d", 6);
	test("testee eeee\x1f", 7);
	test("testeeeeee\r\n\t", 8);
	test("testeeeeee\x7f", 9);
	test("t\res\a\btee\t\aee\fee", 10);
	test("a\xff \xf3 \xec \x8d", 11);
	test("\x42 \x41 \x3c", 12);
	test2();
	return (0);
}
