#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int remainder;

	a = 35;
	b = 4;
	div = 0;
	remainder = 0;

	ft_div_mod(a, b, &div, &remainder);
	printf("%d\n", div);
	printf("%d\n", remainder);
	return (0);
}
