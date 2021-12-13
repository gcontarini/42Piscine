#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Test -10: %d\n", ft_fibonacci(-10));
	printf("Test 0: %d\n", ft_fibonacci(0));
	printf("Test 1: %d\n", ft_fibonacci(1));
	printf("Test 2: %d\n", ft_fibonacci(2));
	printf("Test 3: %d\n", ft_fibonacci(3));
	printf("Test 10: %d\n", ft_fibonacci(10));
	printf("Test 20: %d\n", ft_fibonacci(20));
	return (0);
}
