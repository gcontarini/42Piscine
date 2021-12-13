#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("Test 0: %d\n", ft_is_prime(0));
	printf("Test 1: %d\n", ft_is_prime(1));
	printf("Test 2: %d\n", ft_is_prime(2));
	printf("Test 3: %d\n", ft_is_prime(3));
	printf("Test 4: %d\n", ft_is_prime(4));
	printf("Test 5: %d\n", ft_is_prime(5));
	printf("Test 7: %d\n", ft_is_prime(7));
	printf("Test 13: %d\n", ft_is_prime(13));
	printf("Test 17: %d\n", ft_is_prime(17));
	printf("Test 15: %d\n", ft_is_prime(15));
	printf("Test 81: %d\n", ft_is_prime(81));
	printf("Test 501456: %d\n", ft_is_prime(501456));
	printf("Test -501456: %d\n", ft_is_prime(-501456));
	printf("Test 2,147,483,647: %d\n", ft_is_prime(2147483647));
	printf("Test 2,147,483,645: %d\n", ft_is_prime(2147483645));
	return (0);
}
