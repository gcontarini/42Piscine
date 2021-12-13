#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("Test 0: %d\n", ft_recursive_factorial(0));
	printf("Test 1: %d\n", ft_recursive_factorial(1));
	printf("Test 5: %d\n", ft_recursive_factorial(5));
	printf("Test 10: %d\n", ft_recursive_factorial(10));
	printf("Test 587: %d\n", ft_recursive_factorial(587));
	printf("Test -1: %d\n", ft_recursive_factorial(-1));
	printf("Test -10: %d\n", ft_recursive_factorial(-10));
	printf("Test -567: %d\n", ft_recursive_factorial(-567));
	return (0);
}
