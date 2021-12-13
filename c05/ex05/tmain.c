#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Test 4: %d\n", ft_sqrt(4));
	printf("Test 16: %d\n", ft_sqrt(16));
	printf("Test 64: %d\n", ft_sqrt(64));
	printf("Test 25: %d\n", ft_sqrt(25));
	printf("Test 81: %d\n", ft_sqrt(81));
	printf("Test 1: %d\n", ft_sqrt(1));
	printf("Test 0: %d\n", ft_sqrt(0));
	printf("Test 2: %d\n", ft_sqrt(2));
	printf("Test -9: %d\n", ft_sqrt(-9));
	printf("Test 12: %d\n", ft_sqrt(12));
	printf("Test 5: %d\n", ft_sqrt(5));
	printf("Test 2147395600: %d\n", ft_sqrt(2147395600));
	printf("Test 2,147,483,647: %d\n", ft_sqrt(2147483647));
	return (0);
}
