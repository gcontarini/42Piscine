#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Test 0: %d\n", ft_find_next_prime(0));
	printf("Test 1: %d\n", ft_find_next_prime(1));
	printf("Test -2: %d\n", ft_find_next_prime(-2));
	printf("Test 5409832: %d\n", ft_find_next_prime(5409832));
	printf("Test 1098758934: %d\n", ft_find_next_prime(1098758934));
	printf("Test 2,147,483,645: %d\n", ft_find_next_prime(2147483645));
	printf("Test 2,147,483,646: %d\n", ft_find_next_prime(2147483646));
	printf("Test 2,147,483,587: %d\n", ft_find_next_prime(2147483587));
	printf("Test 2,147,483,643: %d\n", ft_find_next_prime(2147483643));
	printf("Test 2,147,483,645: %d\n", ft_find_next_prime(2147483645));
	printf("Test 2,147,483,647: %d\n", ft_find_next_prime(2147483647));
	return (0);
}
