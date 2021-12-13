#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("Test 0 power 0: %d\n", ft_recursive_power(0, 0));
	printf("Test 1 power 0: %d\n", ft_recursive_power(1, 0));
	printf("Test 1 power 1: %d\n", ft_recursive_power(1, 1));
	printf("Test 2 power 0: %d\n", ft_recursive_power(2, 0));
	printf("Test 2 power 2: %d\n", ft_recursive_power(2, 2));
	printf("Test 10 power 2: %d\n", ft_recursive_power(10, 2));
	printf("Test 4 power 5: %d\n", ft_recursive_power(4, 5));
	printf("Test -1 power 5: %d\n", ft_recursive_power(-1, 5));
	printf("Test -1 power 4: %d\n", ft_recursive_power(-1, 4));
	printf("Test -10 power 4: %d\n", ft_recursive_power(-10, 4));
	printf("Test 0 power 10: %d\n", ft_recursive_power(0, 10));
	printf("Test 9 power 2: %d\n", ft_recursive_power(9, 2));
	printf("Test 5 power -2: %d\n", ft_recursive_power(5, -2));
	return (0);
}
