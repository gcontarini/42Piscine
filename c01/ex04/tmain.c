#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 35;
	b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
