#include <stdio.h>
#include <string.h>

int	ft_putnbr(int nb);

int	main(void)
{
	int	n;

	n = -2147483648;
	ft_putnbr(n);
	printf("\n%d", n);
	return (0);
}
